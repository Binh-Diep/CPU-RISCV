/* verilator lint_off UNUSED */
module regfile(
    //inputs
	input  logic clk_i,             //clock
	input  logic rst_ni,            //negative reset
	input  logic rd_wren_i,         //1 if write to the RegFile, otherwise 0
	input  logic [4:0] rs1_addr_i,  //rs1 address
	input  logic [4:0] rs2_addr_i,  //rs2 address
	input  logic [4:0] rd_addr_i,   //destination address
	input  logic [31:0] rd_data_i,  //data to write in RD
	//outputs
	output logic [31:0] rs1_data_o, //read data
	output logic [31:0] rs2_data_o  //read data
);
    logic [31:0] memory_cell [32];
    //write data
    always_ff @(posedge clk_i) begin : proc_reg
        if (rd_wren_i) begin : write_to_REGFILE
            if (rd_addr_i != 5'b00000) memory_cell[rd_addr_i] <= rd_data_i;
        end
    end
	//Read data
    assign rs1_data_o = memory_cell[rs1_addr_i];
    assign rs2_data_o = memory_cell[rs2_addr_i];
    //initial
    initial begin
        memory_cell = '{default: 32'h00000000};
    end
endmodule : regfile
