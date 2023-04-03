`default_nettype none

module wrapper
//import mypkg::*;
(
  input  logic [17:0]      SW      ,

  output logic [17:0]      LEDR    ,
  output logic [8:0]       LEDG    ,

  output logic [6:0]       HEX0    ,
  output logic [6:0]       HEX1    ,
  output logic [6:0]       HEX2    ,
  output logic [6:0]       HEX3    ,
  output logic [6:0]       HEX4    ,
  output logic [6:0]       HEX5    ,
  output logic [6:0]       HEX6    ,
  output logic [6:0]       HEX7    ,

  output logic [7:0]       LCD_DATA,
  output logic             LCD_RW  ,
  output logic             LCD_RS  ,
  output logic             LCD_EN  ,
  output logic             LCD_ON  ,

  input  logic             CLOCK_50
);

  assign LEDR[17] = 1'b1;

  logic [31:0]       io_sw  ;
  logic [31:0]       io_lcd ;
  logic [31:0]       io_ledg;
  logic [31:0]       io_ledr;
  logic [31:0]       io_hex0;
  logic [31:0]       io_hex1;
  logic [31:0]       io_hex2;
  logic [31:0]       io_hex3;
  logic [31:0]       io_hex4;
  logic [31:0]       io_hex5;
  logic [31:0]       io_hex6;
  logic [31:0]       io_hex7;

  assign LEDG[8] = |io_lcd[28:10] || |io_hex0[31:7] || |io_hex1[31:7] || |io_hex2[31:7]
                           || |io_hex3[31:7] || |io_hex4[31:7] || |io_hex5[31:7]
                           || |io_hex6[31:7] || |io_hex7[31:7] ||  io_ledg[31:8] | io_ledr[31:17];

  assign HEX0       = ~io_hex0[6:0];
  assign HEX1       = ~io_hex1[6:0];
  assign HEX2       = ~io_hex2[6:0];
  assign HEX3       = ~io_hex3[6:0];
  assign HEX4       = ~io_hex4[6:0];
  assign HEX5       = ~io_hex5[6:0];
  assign HEX6       = ~io_hex6[6:0];
  assign HEX7       = ~io_hex7[6:0];

  assign LEDG[7:0]  =  io_ledg[7:0];
  assign LEDR[16:0] =  io_ledr[16:0];

  assign LCD_DATA   =  io_lcd[7:0];
  assign LCD_RW     =  io_lcd[8];
  assign LCD_RS     =  io_lcd[9];
  assign LCD_EN     =  io_lcd[10];
  assign LCD_ON     =  io_lcd[31];

  assign io_sw      = {{15{1'b0}},SW[16:0]};

  singlecycle singleCycle (
    .io_sw_i  (io_sw  ),
    .io_lcd_o (io_lcd ),
    .io_ledg_o(io_ledg),
    .io_ledr_o(io_ledr),
    .io_hex0_o(io_hex0),
    .io_hex1_o(io_hex1),
    .io_hex2_o(io_hex2),
    .io_hex3_o(io_hex3),
    .io_hex4_o(io_hex4),
    .io_hex5_o(io_hex5),
    .io_hex6_o(io_hex6),
    .io_hex7_o(io_hex7),
    .clk_i    (CLOCK_50),
    .rst_ni   (SW[17] )
  );

endmodule : wrapper
