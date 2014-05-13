//stages of p_cpu
`include "macro.vh"

//alu
module alu(
input wire [31:0] A,
input wire [31:0] B,
input wire [3:0] control,
output reg [31:0] result
    );
	
always @ * begin
	case (control)
		`ALU_ADD: result = A + B;
		`ALU_SUB: result = A - B;
		`ALU_NOR: result = ~(A | B);
		`ALU_AND: result = A & B;
		`ALU_OR : result = A | B;
		`ALU_SLT: result = A < B? 1 : 0;
		default: result = ~ (A | B);
	endcase
end

endmodule