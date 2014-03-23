
|MIPS汇编       | 机器码      | 预期结果        |
|---------------|-------------|-----------------|
|LW  r1, 20($0) | 0x8C01_0014 | R1=0xBEEF_0000  |
|LW  r2, 21($0) | 0x8C02_0015 | R2=0x0000_BEEF  |
|ADD r3, r1, r2 | 0x0022_1820 | R3=0xBEEF_BEEF  |
|SUB r4, r1, r2 | 0x0022_2022 | R4=0xBEEE_4111  |
|AND r5, r3, r4 | 0x0064_2824 | R5=0xBEEE_0001  |
|NOR r6, r4, r5 | 0x0085_3027 | R6=0x4111_BEEE  |
|SW  r6, 22($0) | 0xAC06_0016 | 22=0x4111_BEEE  |

## added line

|LW  r2, 20($0) | 0x8C02_0014 | R2=0xBEEF_0000  |
|BEQ r1, r2, 0  | 0x1022_FFF7 | PC=0            |

## deleted line

|J   0          | 0x0800_0000 | PC=0            |




## OK List

FPGA #C11
