/* verilator lint_off UNUSED */
module lsu (
    //inputs
    input logic  clk_i,            //Clock
    input logic  rst_ni,           //negative reset
    input logic  st_en_i,          //1 if write,0 if read
    input logic  [2:0]  sel_by_i,  //select load or store byte, half word, word
    input logic  [31:0] addr_i,    //address for read and write
    input logic  [31:0] st_data_i, //store data
    input logic  [31:0] io_sw_i,   //18-bit data from 18 switches 
    //outputs
    output logic [31:0] ld_data_o, //load data
    output logic [31:0] io_lcd_o,  //32-bit data to drive LCD
    output logic [31:0] io_ledg_o, //32-bit data to drive LEDs
    output logic [31:0] io_ledr_o, //32-bit data to drive red LEDs
    //LED 7 segments
    output logic [31:0] io_hex0_o,   //7 SEGs
    output logic [31:0] io_hex1_o,   //7 SEGs
    output logic [31:0] io_hex2_o,   //7 SEGs
    output logic [31:0] io_hex3_o,   //7 SEGs
    output logic [31:0] io_hex4_o,   //7 SEGs
    output logic [31:0] io_hex5_o,   //7 SEGs
    output logic [31:0] io_hex6_o,   //7 SEGs
    output logic [31:0] io_hex7_o    //7 SEGs
);
    //variables
    logic sel_data_m;
    logic sel_OP_m;
    logic sel_IP_m;
    logic [3:0]  num_bytes;
    logic [31:0] tmp_data_m;
    logic [31:0] tmp_OP_m;
    logic [31:0] tmp_IP_m;
    logic [3:0][7:0] tmp_ld_data;
    //memory mapping partition
    logic [3:0][7:0] data_memory [256]; //10 address bus: 2 end bit use for select bytes => 2^8
    logic [3:0][7:0] OP_memory   [64];  //08 address bus: 2 end bit use for select bytes => 2^6
    logic [3:0][7:0] IP_memory;         //1 memory cell use for SW (18 bit)
    //select load or store byte, half word, word
    always_comb begin : proc_select_bytes
        case (sel_by_i[1:0])
            2'b00: begin : bytes
                if      (addr_i[1:0] == 2'b00) num_bytes = 4'b0001; //bytes order-0
                else if (addr_i[1:0] == 2'b01) num_bytes = 4'b0010; //bytes order-1
                else if (addr_i[1:0] == 2'b10) num_bytes = 4'b0100; //bytes order-2
                else                           num_bytes = 4'b1000; //bytes order-3
            end
            2'b01: begin : half_word
                if      (addr_i[1:0] == 2'b00) num_bytes = 4'b0011; //bytes order-0
                else if (addr_i[1:0] == 2'b01) num_bytes = 4'b0011; //bytes order-1
                else if (addr_i[1:0] == 2'b10) num_bytes = 4'b1100; //bytes order-2
                else                           num_bytes = 4'b1100; //bytes order-3
            end
            2'b10: begin : word
                num_bytes = 4'b1111; //bytes order 0 and 1 and 2 and 3
            end
            default: num_bytes = 4'bxxxx;
        endcase
    end
    //address select for partition memory
    always_comb begin : proc_memory_select
        case (addr_i[10:8])
            3'b000,3'b001,3'b010,3'b011: begin
                sel_data_m = 1'b1;
                sel_OP_m   = 1'b0;
                sel_IP_m   = 1'b0;
            end
            3'b100: begin
                sel_data_m = 1'b0;
                sel_OP_m   = 1'b1;
                sel_IP_m   = 1'b0;
            end
            3'b101: begin
                sel_data_m = 1'b0;
                sel_OP_m   = 1'b0;
                sel_IP_m   = 1'b1;
            end
            default: begin
                sel_data_m = 1'b0;
                sel_OP_m   = 1'b0;
                sel_IP_m   = 1'b0;
            end
        endcase
    end
    //Data memory: address bus [1:0] => select byte, address bus [9:2] => store or load data
      //write data: need clock
    always_ff @(posedge clk_i) begin
        if (sel_data_m && st_en_i) begin
	        //bytes
	        if      (num_bytes == 4'b0001) data_memory[addr_i[9:2]][0] <= st_data_i[7:0];
	        else if (num_bytes == 4'b0010) data_memory[addr_i[9:2]][1] <= st_data_i[15:8];
	        else if (num_bytes == 4'b0100) data_memory[addr_i[9:2]][2] <= st_data_i[23:16];
	        else if (num_bytes == 4'b1000) data_memory[addr_i[9:2]][3] <= st_data_i[31:24];
	        //half word
	        else if (num_bytes == 4'b0011) begin
	            data_memory[addr_i[9:2]][0] <= st_data_i[7:0];
	            data_memory[addr_i[9:2]][1] <= st_data_i[15:8];
	        end
	        else if (num_bytes == 4'b1100) begin
	            data_memory[addr_i[9:2]][2] <= st_data_i[23:16];
	            data_memory[addr_i[9:2]][3] <= st_data_i[31:24];
	        end
	        //word
	        else if (num_bytes == 4'b1111) begin
	            data_memory[addr_i[9:2]][0] <= st_data_i[7:0];
	            data_memory[addr_i[9:2]][1] <= st_data_i[15:8];
	            data_memory[addr_i[9:2]][2] <= st_data_i[23:16];
	            data_memory[addr_i[9:2]][3] <= st_data_i[31:24];
	        end
        end
    end
      //read data: no need clock
    always_comb begin
        if (sel_data_m && !st_en_i) begin
	        //bytes
	        if      (num_bytes == 4'b0001) tmp_data_m[7:0] = data_memory[addr_i[9:2]][0];
	        else if (num_bytes == 4'b0010) tmp_data_m[7:0] = data_memory[addr_i[9:2]][1];
	        else if (num_bytes == 4'b0100) tmp_data_m[7:0] = data_memory[addr_i[9:2]][2];
	        else if (num_bytes == 4'b1000) tmp_data_m[7:0] = data_memory[addr_i[9:2]][3];
	        //half word
	        else if (num_bytes == 4'b0011) begin
	            tmp_data_m[7:0]   = data_memory[addr_i[9:2]][0];
	            tmp_data_m[15:8]  = data_memory[addr_i[9:2]][1];
	        end
	        else if (num_bytes == 4'b1100) begin
	            tmp_data_m[7:0]  = data_memory[addr_i[9:2]][2];
	            tmp_data_m[15:8] = data_memory[addr_i[9:2]][3];
	        end
	        //word
	        else if (num_bytes == 4'b1111) begin
	            tmp_data_m[7:0]   = data_memory[addr_i[9:2]][0];
	            tmp_data_m[15:8]  = data_memory[addr_i[9:2]][1];
	            tmp_data_m[23:16] = data_memory[addr_i[9:2]][2];
	            tmp_data_m[31:24] = data_memory[addr_i[9:2]][3];
	        end
	        else tmp_data_m = 32'hxxxxxxxx;
        end
        else tmp_data_m = 32'hxxxxxxxx;
    end
    //Output peripherals: address bus [1:0] => select byte, address bus [7:2] => store or load data
      //write data: need clock
    always_ff @(posedge clk_i) begin
        if (sel_OP_m && st_en_i) begin
	        //bytes
	        if      (num_bytes == 4'b0001) OP_memory[addr_i[7:2]][0] <= st_data_i[7:0];
	        else if (num_bytes == 4'b0010) OP_memory[addr_i[7:2]][1] <= st_data_i[15:8];
	        else if (num_bytes == 4'b0100) OP_memory[addr_i[7:2]][2] <= st_data_i[23:16];
	        else if (num_bytes == 4'b1000) OP_memory[addr_i[7:2]][3] <= st_data_i[31:24];
	        //half word
	        else if (num_bytes == 4'b0011) begin
	            OP_memory[addr_i[7:2]][0] <= st_data_i[7:0];
	            OP_memory[addr_i[7:2]][1] <= st_data_i[15:8];
	        end
	        else if (num_bytes == 4'b1100) begin
	            OP_memory[addr_i[7:2]][2] <= st_data_i[23:16];
	            OP_memory[addr_i[7:2]][3] <= st_data_i[31:24];
	        end
	        //word
	        else if (num_bytes == 4'b1111) begin
	            OP_memory[addr_i[7:2]][0] <= st_data_i[7:0];
	            OP_memory[addr_i[7:2]][1] <= st_data_i[15:8];
	            OP_memory[addr_i[7:2]][2] <= st_data_i[23:16];
	            OP_memory[addr_i[7:2]][3] <= st_data_i[31:24];
	        end
        end
    end
      //read data: no need clock
    always_comb begin
        if (sel_OP_m && !st_en_i) begin
	        //bytes
	        if      (num_bytes == 4'b0001) tmp_OP_m[7:0] = OP_memory[addr_i[7:2]][0];
	        else if (num_bytes == 4'b0010) tmp_OP_m[7:0] = OP_memory[addr_i[7:2]][1];
	        else if (num_bytes == 4'b0100) tmp_OP_m[7:0] = OP_memory[addr_i[7:2]][2];
	        else if (num_bytes == 4'b1000) tmp_OP_m[7:0] = OP_memory[addr_i[7:2]][3];
	        //half word
	        else if (num_bytes == 4'b0011) begin
	            tmp_OP_m[7:0]   = OP_memory[addr_i[7:2]][0];
	            tmp_OP_m[15:8]  = OP_memory[addr_i[7:2]][1];
	        end
	        else if (num_bytes == 4'b1100) begin
	            tmp_OP_m[7:0]   = OP_memory[addr_i[7:2]][2];
	            tmp_OP_m[15:8]  = OP_memory[addr_i[7:2]][3];
	        end
	        //word
	        else if (num_bytes == 4'b1111) begin
	            tmp_OP_m[7:0]   = OP_memory[addr_i[7:2]][0];
	            tmp_OP_m[15:8]  = OP_memory[addr_i[7:2]][1];
	            tmp_OP_m[23:16] = OP_memory[addr_i[7:2]][2];
	            tmp_OP_m[31:24] = OP_memory[addr_i[7:2]][3];
	        end
	        else tmp_OP_m = 32'hxxxxxxxx;
        end
        else tmp_OP_m = 32'hxxxxxxxx;
    end
    //Input peripherals
      //write data: need clock
    always_ff @(posedge clk_i) begin
        IP_memory <= io_sw_i; 
    end
      //read data: no need clock
    always_comb begin
        if (sel_IP_m && !st_en_i) begin
	        //bytes
	        if      (num_bytes == 4'b0001) tmp_IP_m[7:0] = IP_memory[0];
	        else if (num_bytes == 4'b0010) tmp_IP_m[7:0] = IP_memory[1];
	        else if (num_bytes == 4'b0100) tmp_IP_m[7:0] = IP_memory[2];
	        else if (num_bytes == 4'b1000) tmp_IP_m[7:0] = IP_memory[3];
	        //half word
	        else if (num_bytes == 4'b0011) begin
	            tmp_IP_m[7:0]   = IP_memory[0];
	            tmp_IP_m[15:8]  = IP_memory[1];
	        end
	        else if (num_bytes == 4'b1100) begin
	            tmp_IP_m[7:0]   = IP_memory[2];
	            tmp_IP_m[15:8]  = IP_memory[3];
	        end
	        //word
	        else if (num_bytes == 4'b1111) begin
	            tmp_IP_m[7:0]   = IP_memory[0];
	            tmp_IP_m[15:8]  = IP_memory[1];
	            tmp_IP_m[23:16] = IP_memory[2];
	            tmp_IP_m[31:24] = IP_memory[3];
	        end
	        else tmp_IP_m = 32'hxxxxxxxx;
        end
        else tmp_IP_m = 32'hxxxxxxxx;
    end
    //Mux
    always_comb begin : proc_data_select
        if      (sel_data_m) tmp_ld_data = tmp_data_m;
        else if (sel_OP_m)   tmp_ld_data = tmp_OP_m;
        else if (sel_IP_m)   tmp_ld_data = tmp_IP_m;
        else                 tmp_ld_data = 32'hxxxxxxxx;
    end
    //other peripherals: LCD,led,7seg,...
    always_comb begin : proc_other_peripherals //address bus: 6bit while register address: 8bit
        io_lcd_o  = OP_memory[6'h28]; // A0 >> 2 <=> 1010 0000 => 0010 1000 = 28
        io_ledg_o = OP_memory[6'h24]; // 90 >> 2 <=> 1001 0000 => 0010 0100 = 24
        io_ledr_o = OP_memory[6'h20]; // 80 >> 2 <=> 1000 0000 => 0010 0000 = 20
        io_hex7_o = OP_memory[6'h1C]; // 70 >> 2 <=> 0111 0000 => 0001 1100 = 1C
        io_hex6_o = OP_memory[6'h18]; // 60 >> 2 <=> 0110 0000 => 0001 1000 = 18
        io_hex5_o = OP_memory[6'h14]; // 50 >> 2 <=> 0101 0000 => 0001 0100 = 14
        io_hex4_o = OP_memory[6'h10]; // 40 >> 2 <=> 0100 0000 => 0001 0000 = 10
        io_hex3_o = OP_memory[6'h0C]; // 30 >> 2 <=> 0011 0000 => 0000 1100 = 0C
        io_hex2_o = OP_memory[6'h08]; // 20 >> 2 <=> 0010 0000 => 0000 1000 = 08
        io_hex1_o = OP_memory[6'h04]; // 10 >> 2 <=> 0001 0000 => 0000 0100 = 04
        io_hex0_o = OP_memory[6'h00]; // 00 >> 2 <=> 0000 0000 => 0000 0000 = 00
    end
    //Load sign extend
    always_comb begin
        if (!st_en_i && !sel_by_i[2]) begin
            case (sel_by_i)
                //byte
                3'b000:
                begin
                    ld_data_o = {(tmp_ld_data[0][7] ? 24'hFFFFFF : 24'h0000000),tmp_ld_data[0]};
                end
                //half word
                3'b001:
                begin
                    ld_data_o = {(tmp_ld_data[1][7] ? 16'hFFFF : 16'h0000),tmp_ld_data[1],tmp_ld_data[0]};
                end
                default: ld_data_o = tmp_ld_data;
            endcase
        end
        else ld_data_o = tmp_ld_data;
    end
    //initialize memory
    initial begin
        data_memory = '{default: 32'h00000000};
        OP_memory   = '{default: 32'h00000000};
        IP_memory   = 32'h00000000;
    end
endmodule : lsu
