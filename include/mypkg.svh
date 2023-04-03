package mypkg;
    typedef enum logic[3:0] {
        A_ADD  = 4'h0,
        A_SUB  = 4'h8,
        A_SLT  = 4'h2,
        A_SLTU = 4'h3,
        A_XOR  = 4'h4,
        A_OR   = 4'h6,
        A_AND  = 4'h7,
        A_SLL  = 4'h1,
        A_SRL  = 4'h5,
        A_SRA  = 4'hd
    } alu_op_e;	
endpackage : mypkg
