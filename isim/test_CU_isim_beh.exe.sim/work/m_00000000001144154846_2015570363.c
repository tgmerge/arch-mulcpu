/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/cszju/Desktop/pipeLineCPU/cu_test.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {2348875796U, 0U};
static unsigned int ng3[] = {2348941333U, 0U};
static unsigned int ng4[] = {2234400U, 0U};
static unsigned int ng5[] = {4128U, 0U};
static unsigned int ng6[] = {2301986U, 0U};
static unsigned int ng7[] = {6563876U, 0U};
static unsigned int ng8[] = {8728615U, 0U};
static unsigned int ng9[] = {2886074390U, 0U};
static unsigned int ng10[] = {281542648U, 0U};



static void Initial_147_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 6160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(147, ng0);

LAB4:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(206, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(218, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(226, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(227, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 5968);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(230, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(231, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB1;

}

static void Always_236_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 6408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 6216);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(236, ng0);
    t4 = (t0 + 4760);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 4760);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000001144154846_2015570363_init()
{
	static char *pe[] = {(void *)Initial_147_0,(void *)Always_236_1};
	xsi_register_didat("work_m_00000000001144154846_2015570363", "isim/test_CU_isim_beh.exe.sim/work/m_00000000001144154846_2015570363.didat");
	xsi_register_executes(pe);
}
