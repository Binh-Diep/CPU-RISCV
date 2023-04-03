//instruction memory: 16KB = 2^14 Byte = 2^14.2^3 bit => 14 address bus
//1 memory cell = 1 word = 4 bytes = 32 bits
//1 address bus => 1 byte
//4 address bus => 4 byte = 1 word
/* verilator lint_off UNUSED */
module inst_memory(
    //inputs
    input logic clk_i,
    input logic rst_ni,
    input logic [31:0] addr_i,
    //outputs
    output logic [31:0] rdata_o
);
    logic [31:0] memory_cell [2**12];
    //The Instruction Memory reads data from a file called instmem.data in memory folder
    initial begin : read_instmem
        $readmemh("./memory/instmem.data.sim",memory_cell);
    end
    // read data don’t need the clock
    assign rdata_o = memory_cell[addr_i[13:2]];
endmodule : inst_memory
