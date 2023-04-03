/* verilator lint_off UNUSED */
`include"src/constants.sv"
module ctrl_unit (
    //inputs
    input logic [31:0] instr_i,
    input logic br_less_i,
    input logic br_equal_i,
    //outputs
    output logic br_sel_o,      //0: PC+4   1: PC_alu 
    output logic br_unsigned_o, //1: unsigned 2 operands
    output logic rd_wren_o,     //1: write to RegFile 
    output logic op_a_sel_o,    //0: rs1    1: PC
    output logic op_b_sel_o,    //0: rs2    1: imm
    output logic mem_wren_o,    //1: write to LSU
    output logic [1:0] wb_sel_o,//0: ALU data     1: load data     2: PC+4
    output logic [2:0] mem_op_o,//bytes for load or store
    output logic [3:0] alu_op_o //operation of ALU
);
    always_comb begin : proc_ctrl
        br_sel_o      = `CTL_PC_PC4;          //PC source
        br_unsigned_o = 1'bx;                 //Branch 2 operands
        rd_wren_o     = 1'b0;
        op_a_sel_o    = `CTL_ALU_A_RS1;       //1st operand source
        op_b_sel_o    = `CTL_ALU_B_RS2;       //2nd operand source
        mem_wren_o    = 1'b0;    
        wb_sel_o      = `CTL_WRITEBACK_ALU;   //data source
        mem_op_o      = `FUNCT3_MEM_WORD;
        alu_op_o      = `ALU_ADD;             //ALU operations
        case (instr_i[6:2])
            `OPCODE_LUI: 
            begin
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_RS2;
                wb_sel_o      = `CTL_WRITEBACK_IMM;
            end
            `OPCODE_AUIPC:
            begin
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_PC;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                alu_op_o      = `ALU_ADD;
                wb_sel_o      = `CTL_WRITEBACK_ALU;
            end            
            `OPCODE_JAL:
            begin
                br_sel_o      = `CTL_PC_ALU_DATA;//
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_PC;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                alu_op_o      = `ALU_ADD;
                wb_sel_o      = `CTL_WRITEBACK_PC4;
            end
            `OPCODE_JALR:
            begin
                br_sel_o      = `CTL_PC_ALU_DATA;//
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                alu_op_o      = `ALU_ADD;
                wb_sel_o      = `CTL_WRITEBACK_PC4;
            end
            `OPCODE_BRANCH:
            begin
                case (instr_i[14:12])
                    `FUNCT3_BRANCH_BEQ  : br_sel_o = br_equal_i;
                    `FUNCT3_BRANCH_BNE  : br_sel_o = !br_equal_i;
                    `FUNCT3_BRANCH_BLT  : br_sel_o = br_less_i;
                    `FUNCT3_BRANCH_BGE  : br_sel_o = (br_equal_i || !br_less_i);
                    `FUNCT3_BRANCH_BLTU : br_sel_o = br_less_i;
                    `FUNCT3_BRANCH_BGEU : br_sel_o = (br_equal_i || !br_less_i);
                    default: br_sel_o = 1'bx;
                endcase
                br_unsigned_o = ((instr_i[14:12] == `FUNCT3_BRANCH_BLTU) || (instr_i[14:12] == `FUNCT3_BRANCH_BGEU));
                op_a_sel_o    = `CTL_ALU_A_PC;
                op_b_sel_o    = `CTL_ALU_B_IMM;
            end
            `OPCODE_LOAD:
            begin
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                alu_op_o      = `ALU_ADD;
                mem_op_o      = instr_i[14:12];
                wb_sel_o      = `CTL_WRITEBACK_LOAD;
            end
            `OPCODE_STORE:
            begin
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                alu_op_o      = `ALU_ADD;
                mem_wren_o    = 1'b1;
                mem_op_o      = instr_i[14:12];
            end
            `OPCODE_OP_IMM:
            begin
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_IMM;
                wb_sel_o      = `CTL_WRITEBACK_ALU;
                alu_op_o      = {((instr_i[14:12] == 3'b001)||(instr_i[14:12] == 3'b101))?(instr_i[30]):(1'b0),instr_i[14:12]};
            end
            `OPCODE_OP:
            begin
                rd_wren_o     = 1'b1;
                op_a_sel_o    = `CTL_ALU_A_RS1;
                op_b_sel_o    = `CTL_ALU_B_RS2;
                wb_sel_o      = `CTL_WRITEBACK_ALU;
                alu_op_o      = {instr_i[30],instr_i[14:12]};
            end
            default: 
            begin
                rd_wren_o    = 1'bx;
                mem_wren_o   = 1'bx;
            end
        endcase
    end
endmodule : ctrl_unit
