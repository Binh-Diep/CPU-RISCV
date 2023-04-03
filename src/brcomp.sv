
module brcomp(
    //input
    input   signed [31:0]  rs1_data_i,
    input   signed [31:0]  rs2_data_i,
    input   logic          br_unsigned_i,
    //output
    output  logic          br_less,
    output  logic          br_equal
);
    always_comb
        if (br_unsigned_i) begin
            br_less = ($unsigned(rs1_data_i) < $unsigned(rs2_data_i));
        end
        else br_less = (rs1_data_i < rs2_data_i);

    assign br_equal = (rs1_data_i == rs2_data_i);
endmodule
