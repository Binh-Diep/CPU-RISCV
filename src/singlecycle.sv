module singlecycle (
    //inputs
    input logic clk_i,
    input logic rst_ni,
    input logic [31:0] io_sw_i,
    //outputs
    output logic [31:0] io_lcd_o,
    output logic [31:0] io_ledg_o,
    output logic [31:0] io_ledr_o,
    output logic [31:0] io_hex0_o,
    output logic [31:0] io_hex1_o,
    output logic [31:0] io_hex2_o,
    output logic [31:0] io_hex3_o,
    output logic [31:0] io_hex4_o,
    output logic [31:0] io_hex5_o,
    output logic [31:0] io_hex6_o,
    output logic [31:0] io_hex7_o
);
    //variables
    logic br_sel;
    logic rd_wren;
    logic br_less;
    logic br_equal;
    logic br_unsigned;
    logic op_a_sel;
    logic op_b_sel;
    logic mem_wren;
    logic [1:0] wb_sel;
    logic [2:0] mem_op;
    logic [3:0] alu_op;
    logic [31:0] imm;
    logic [31:0] rs1_data;
    logic [31:0] rs2_data;
    logic [31:0] wb_data;
    logic [31:0] next_pc;
    logic [31:0] pc;
    logic [31:0] pc_four;
    logic [31:0] instr;
    logic [31:0] alu_data;
    logic [31:0] operand_a;
    logic [31:0] operand_b;
    logic [31:0] ld_data;
    //slave modules
    ctrl_unit control_unit(
    	.instr_i       (instr),
    	.br_less_i     (br_less),
    	.br_equal_i    (br_equal),
    	.br_sel_o      (br_sel),
    	.br_unsigned_o (br_unsigned),
    	.rd_wren_o     (rd_wren),
    	.op_a_sel_o    (op_a_sel),
    	.op_b_sel_o    (op_b_sel),
    	.mem_wren_o    (mem_wren),
    	.wb_sel_o      (wb_sel),
    	.mem_op_o      (mem_op),
    	.alu_op_o      (alu_op)  
    );
    inst_memory instruction_memory(
    	.clk_i         (clk_i),
    	.rst_ni        (rst_ni),
    	.addr_i        (pc),
    	.rdata_o       (instr)
    );
    regfile register_file(
    	.clk_i         (clk_i),
    	.rst_ni        (rst_ni),
    	.rd_wren_i     (rd_wren),
    	.rs1_addr_i    (instr[19:15]),
    	.rs2_addr_i    (instr[24:20]),
    	.rd_addr_i     (instr[11:7]),
    	.rd_data_i     (wb_data),
    	.rs1_data_o    (rs1_data),
    	.rs2_data_o    (rs2_data)
    );
    immgen immediate_generator(
    	.instr_i       (instr),
    	.imm_o         (imm)
    );
    brcomp branch_comparison(
    	.rs1_data_i    (rs1_data),
    	.rs2_data_i    (rs2_data),
    	.br_unsigned_i (br_unsigned),
    	.br_less       (br_less),
    	.br_equal      (br_equal)
    );
    alu arithmetic_logic_unit(
    	.operand_a     (operand_a),
    	.operand_b     (operand_b),
    	.alu_op_i      (alu_op),
    	.alu_data_o    (alu_data)
    );
    lsu load_store_unit(
    	.clk_i         (clk_i),
    	.rst_ni        (rst_ni),
    	.st_en_i       (mem_wren),
    	.sel_by_i      (mem_op),
    	.addr_i        (alu_data),
    	.st_data_i     (rs2_data),
    	.io_sw_i       (io_sw_i),
    	.ld_data_o     (ld_data),
    	.io_lcd_o      (io_lcd_o),
    	.io_ledr_o     (io_ledr_o),
    	.io_ledg_o     (io_ledg_o),
    	.io_hex0_o     (io_hex0_o),
    	.io_hex1_o     (io_hex1_o),
    	.io_hex2_o     (io_hex2_o),
    	.io_hex3_o     (io_hex3_o),
    	.io_hex4_o     (io_hex4_o),
    	.io_hex5_o     (io_hex5_o),
    	.io_hex6_o     (io_hex6_o),
    	.io_hex7_o     (io_hex7_o)
    );
    //implementation
    assign pc_four = pc + 32'h00000004;
    always_ff @(posedge clk_i,negedge rst_ni) begin : proc_PC
        if (!rst_ni) pc <= 32'h00000000;
        else         pc <= next_pc;
    end
    //mux-PC: 0 - PC+4 or 0 - ALU_DATA
    always_comb begin : proc_muxPC
        case (br_sel)
            1'b0:    next_pc = pc_four;
            1'b1:    next_pc = alu_data;
            default: next_pc = 32'hxxxxxxxx;
        endcase
    end
    //mux-operand A: 0 - rs1   1 - PC
    always_comb begin : proc_op_a_sel
        case (op_a_sel)
            1'b0:    operand_a = rs1_data;
            1'b1:    operand_a = pc;
            default: operand_a = 32'hxxxxxxxx;
        endcase
    end
    //mux-operand B: 0 - rs2   1 - imm
    always_comb begin : proc_op_b_sel
        case (op_b_sel)
            1'b0:    operand_b = rs2_data;
            1'b1:    operand_b = imm;
            default: operand_b = 32'hxxxxxxxx; 
        endcase
    end 
    //mux-writeback data: 00 - ALU DATA      01 - Load data       10 - PC+4
    always_comb begin : proc_writeback_data
        case (wb_sel)
            2'b00:   wb_data = alu_data;
            2'b01:   wb_data = ld_data;
            2'b10:   wb_data = pc_four;
            2'b11:   wb_data = imm;
            default: wb_data = 32'hxxxxxxxx;
        endcase
    end
endmodule : singlecycle
