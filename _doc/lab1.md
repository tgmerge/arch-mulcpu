            re:
8c010014    lw   $1, 20($0)      r1 <= 1
8c020018    lw   $2, 21($0)      r2 <= 3
00223020    add  $6, $1, $2      r6 <= 4
00223022    sub  $6, $1, $2      r6 <= -2
00223024    and  $6, $1, $2      r6 <= 1
0041302a    slt  $6, $2, $1      r6 <= 00
0022302a    slt  $6, $1, $2      r6 <= 01
10c1fff8    beq  $6, $1, re      jmp
00000020    add  $0, $0, $0
1021fff6    beq  $1, $1, re      xxx
00000020    add  $0, $0, $0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000000    direct 0
00000001    direct 1
00000003    direct 3






























## OK List

FPGA #C11























