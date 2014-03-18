`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:21:15 05/27/2013 
// Design Name: 
// Module Name:    multi_alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module alu(input wire [31:0] a, 
input wire [31:0] b, 
input wire [1:0] switch, 
output reg [31:0] display_num
    );
initial begin
display_num=0;
end
always @ (switch)
begin
	case(switch[1:0])
		2'b00:display_num=a + b;
		2'b01:display_num=a - b;
		2'b10:display_num=a|b;
		2'b11:display_num=a&b;

	endcase
	end
endmodule