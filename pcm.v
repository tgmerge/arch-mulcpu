//pcm module
module pcm(clk, rst, alu_out, c_data, ir_data, pcsource, write_pc, pc);
	
	input         	clk;
	input         	rst;
	input [31:0]	alu_out;
	input [31:0]	c_data;
	input [31:0]	ir_data;
	input [1:0]		pcsource;
	input 			write_pc;
	
	output [31:0]	pc;
	
	reg [31:0]		pc;
	wire [31:0]		npc;
	wire [31:0]		addr;
	wire 				write_pc;
	
	initial begin
		pc = 32'h00000000;
	end
	
	assign addr = {pc[31:26], ir_data[25:0]};
 	assign npc = (pcsource == 2'b00)? alu_out : ((pcsource == 2'b01)? c_data : addr);
	
//	always @ (posedge write_pc) begin
//		pc <= npc;
	always @ (posedge clk) begin
		if(write_pc)
			pc <= npc;
		if (rst) begin
			pc <= 32'h00000000;
		end
	end

endmodule
