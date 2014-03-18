module top(input wire CCLK, BTN3_IN, BTN2_IN,BTN1_IN,input wire[3:0] SW,
output wire [7:0]LED, output wire LCDE, LCDRS, LCDRW, output wire [3:0]LCDDAT);
  
	wire          clk_1ms;
	wire          clk;
	wire          rst; 
	wire			  choose;
	wire [31:0]   raddr;   
	wire [31:0]   waddr;
	wire [31:0]   mem_data;
	
	wire 			  zero;
	wire			  write_pc;
	wire          iord;
	wire			  write_mem;
	wire          write_dr;
	wire          write_ir;
	wire			  memtoreg;
	wire          regdst;
	wire [1:0]    pcsource;
	wire          write_c;
	wire [1:0]    alu_ctrl;
	wire 			  alu_srcA;
	wire [1:0]    alu_srcB;
	wire          write_a;
	wire          write_b;
	wire          write_reg;

	wire [31:0]   alu_out;
	wire [31:0]   rdata_A;
	wire [31:0]   rdata_B;
	wire [15:0]	 rcontent;
	wire [31:0]   pc;
	wire [3:0]    state_out;
	wire [3:0]    insn_type;
	wire [3:0]    insn_code;
	wire [2:0]    insn_stage;
	wire [7:0]	  r6out;
	
	reg  [31:0]   ir_data;
	reg  [31:0]   dr_data;
	reg  [31:0]   a_data;
	reg  [31:0]   b_data;
	reg  [31:0]   c_data;
	
	clock C1 (CCLK, 25000, clk0);
	pbdebounce M1(clk0, BTN2_IN, BTN2);
	pbdebounce M2(clk0, BTN3_IN, BTN3);
	pbdebounce M3(clk0, BTN1_IN, BTN1);
	assign raddr = iord? c_data[31:0] : pc;
	assign waddr = c_data[31:0];
	assign choose = BTN1;
	assign clk = BTN3;
	assign rst = BTN2;
	assign LED[7:0] = r6out[7:0];

	reg [255:0]    strdata;
	reg            cls;
	reg [31:0]     mem_data_old;
	reg [31:0]     pc_old;
	reg [31:0]		raddr_old;
	reg [31:0]     waddr_old;

	wire [3:0]     lcdd;
	wire rslcd, rwlcd, elcd;

	assign LCDDAT[3] = lcdd[3];
	assign LCDDAT[2] = lcdd[2];
	assign LCDDAT[1] = lcdd[1];
	assign LCDDAT[0] = lcdd[0];
	
	assign LCDRS = rslcd;
	assign LCDRW = rwlcd;
	assign LCDE = elcd;
	
	initial begin
		strdata = "01234567 01 01  0 1 2 01        ";
	end
	
	display M0 (CCLK, cls, strdata, rslcd, rwlcd, elcd, lcdd);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    

	always @(CCLK) begin
		if ((BTN3 == 1'b1) || (mem_data != mem_data_old) || (pc != pc_old) || (raddr != raddr_old) || (waddr != waddr_old)) begin
			strdata[255:248] = (mem_data[31:28]<9)?(8'h30 + mem_data[31:28]):(8'h41 + mem_data[31:28]);
			strdata[247:240] = (mem_data[27:24]<9)?(8'h30 + mem_data[27:24]):(8'h41 + mem_data[27:24]);
			strdata[239:232] = (mem_data[23:20]<9)?(8'h30 + mem_data[23:20]):(8'h41 + mem_data[23:20]);
			strdata[231:224] = (mem_data[19:16]<9)?(8'h30 + mem_data[19:16]):(8'h41 + mem_data[19:16]);
			strdata[223:216] = (mem_data[15:12]<9)?(8'h30 + mem_data[15:12]):(8'h41 + mem_data[15:12]);
			strdata[215:208] = (mem_data[11:8]<9)?(8'h30 + mem_data[11:8]):(8'h41 + mem_data[11:8]);
			strdata[207:200] = (mem_data[7:4]<9)?(8'h30 + mem_data[7:4]):(8'h41 + mem_data[7:4]);
			strdata[199:192] = (mem_data[3:0]<9)?(8'h30 + mem_data[3:0]):(8'h41 + mem_data[3:0]);
			//space
			//strdata[191:184] = " ";
			//2 4-bit raddr
			strdata[183:176] = (raddr[7:4]<9)?(8'h30 + raddr[7:4]):(8'h41 + raddr[7:4]);
			strdata[175:168] = (raddr[3:0]<9)?(8'h30 + raddr[3:0]):(8'h41 + raddr[3:0]);
			//space
			//strdata[167:160] = " ";
			//2 4-bit waddr
			strdata[159:152] = (waddr[7:4]<9)?(8'h30 + waddr[7:4]):(8'h41+waddr[7:4]);
			strdata[151:144] = (waddr[3:0]<9)?(8'h30 + waddr[3:0]):(8'h41+waddr[3:0]);
			
			//secondline
			strdata[127:120] = (state_out<9)?(8'h30 + state_out):(8'h41 + state_out);
			//space
			strdata[111:104] = (insn_type<9)?(8'h30 + insn_type):(8'h41 + insn_type);
			//space
			strdata[95:88] = (insn_code<9)?(8'h30 + insn_code):(8'h41 + insn_code);
			//space
			//2 4-bit pc
			strdata[79:72] = (pc[7:4]<9)?(8'h30 + pc[7:4]):(8'h41 + pc[7:4]);
			strdata[71:64] = (pc[3:0]<9)?(8'h30 + pc[3:0]):(8'h41 + pc[3:0]);
			//space
			//strdata[63:56] = " ";
			strdata[55:24]=(rcontent<9)?(8'h30 +rcontent):(8'h41+rcontent);
			cls = 1;
			
			pc_old <= pc;
			mem_data_old <= mem_data;
			raddr_old <= raddr;
			waddr_old <= waddr;
		end
		else
			cls = 0;
	end

	mem x_memory(
		.addra(raddr),
		.addrb(waddr),
		.clka(clk),
		.clkb(clk),
		.dinb(b_data),
		.douta(mem_data),
		.web(write_mem));   
       
	ctrl	x_ctrl(clk, rst, ir_data, zero,
		write_pc, iord, write_mem, write_dr, write_ir, memtoreg, regdst, 
		pcsource, write_c, alu_ctrl, alu_srcA, alu_srcB, write_a, write_b, write_reg,
		state_out, insn_type, insn_code, insn_stage);  

	pcm x_pcm(clk, rst, alu_out, c_data, ir_data, pcsource, write_pc, pc);
	
	always @(write_ir) begin
		if (write_ir)
			ir_data <= mem_data;
	end
	
	always @(write_dr) begin
		if (write_dr)
			dr_data <= mem_data;
	end
	
	reg_wrapper x_reg_wrapper(clk, rst, ir_data, dr_data, c_data, memtoreg, regdst, write_reg,
										 rdata_A, rdata_B, r6out,SW,rcontent,choose); 

	always @(write_a) begin
 		if (write_a)
			a_data <= rdata_A;
	end
	
	always @(write_b) begin
 		if (write_b)
			b_data <= rdata_B;
	end

	alu_wrapper x_alu_wrapper(a_data, b_data, ir_data, pc, 
		alu_srcA, alu_srcB, alu_ctrl,
		zero, alu_out);
										 
	always @(write_c) begin
 		if (write_c)
			c_data <= alu_out;
	end
	
endmodule  
