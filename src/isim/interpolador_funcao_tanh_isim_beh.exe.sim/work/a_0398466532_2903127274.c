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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/gabriel/ann-vhdl/src/interpolador_funcao_tanh.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_PROPOSED_P_0892474878;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
char *ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(char *, char *, char *, char *, int , int , unsigned char , unsigned char );
char *ieee_proposed_p_0892474878_sub_13227029559694678111_450259796(char *, char *, char *, char *, char *, char *);
char *ieee_proposed_p_0892474878_sub_13483384195030879960_450259796(char *, char *, char *, char *, char *, char *);


static void work_a_0398466532_2903127274_p_0(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (15 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = -2;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (-2 - 2);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t6);
    t8 = (t0 + 4256);
    t12 = (t8 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t8);

LAB2:    t16 = (t0 + 4128);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0398466532_2903127274_p_1(char *t0)
{
    char t1[16];
    char t10[16];
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t2 = (t0 + 1968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t5 = *((int *)t4);
    t6 = (t5 - 0);
    t7 = (t6 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t5);
    t8 = (32U * t7);
    t9 = (0 + t8);
    t2 = (t3 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 15;
    t12 = (t11 + 4U);
    *((int *)t12) = -16;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (-16 - 15);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 1032U);
    t15 = *((char **)t12);
    t12 = (t0 + 6784U);
    t16 = ieee_proposed_p_0892474878_sub_13227029559694678111_450259796(IEEE_PROPOSED_P_0892474878, t1, t2, t10, t15, t12);
    t17 = (t1 + 12U);
    t14 = *((unsigned int *)t17);
    t18 = (1U * t14);
    t19 = (64U != t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 4320);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t16, 64U);
    xsi_driver_first_trans_fast(t20);

LAB2:    t25 = (t0 + 4144);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(64U, t18, 0);
    goto LAB6;

}

static void work_a_0398466532_2903127274_p_2(char *t0)
{
    char t1[16];
    char t2[16];
    char t19[16];
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 6864U);
    t5 = (-(16));
    t6 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t6 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t9 = *((char **)t6);
    t10 = *((unsigned char *)t9);
    t6 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t2, t4, t3, 15, t5, t8, t10);
    t11 = (t0 + 2088U);
    t12 = *((char **)t11);
    t11 = (t0 + 1672U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 0);
    t16 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t14);
    t17 = (32U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 15;
    t21 = (t20 + 4U);
    *((int *)t21) = -16;
    t21 = (t20 + 8U);
    *((int *)t21) = -1;
    t22 = (-16 - 15);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;
    t21 = ieee_proposed_p_0892474878_sub_13483384195030879960_450259796(IEEE_PROPOSED_P_0892474878, t1, t6, t2, t11, t19);
    t24 = (t1 + 12U);
    t23 = *((unsigned int *)t24);
    t25 = (1U * t23);
    t26 = (33U != t25);
    if (t26 == 1)
        goto LAB5;

LAB6:    t27 = (t0 + 4384);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t21, 33U);
    xsi_driver_first_trans_fast(t27);

LAB2:    t32 = (t0 + 4160);
    *((int *)t32) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(33U, t25, 0);
    goto LAB6;

}

static void work_a_0398466532_2903127274_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6880U);
    t4 = (-(16));
    t5 = ((IEEE_PROPOSED_P_0892474878) + 1288U);
    t6 = *((char **)t5);
    t7 = *((unsigned char *)t6);
    t5 = ((IEEE_PROPOSED_P_0892474878) + 1168U);
    t8 = *((char **)t5);
    t9 = *((unsigned char *)t8);
    t5 = ieee_proposed_p_0892474878_sub_12117315310034499803_450259796(IEEE_PROPOSED_P_0892474878, t1, t3, t2, 15, t4, t7, t9);
    t10 = (t1 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t12 = (32U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 4448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 32U);
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 4176);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t11, 0);
    goto LAB6;

}


extern void work_a_0398466532_2903127274_init()
{
	static char *pe[] = {(void *)work_a_0398466532_2903127274_p_0,(void *)work_a_0398466532_2903127274_p_1,(void *)work_a_0398466532_2903127274_p_2,(void *)work_a_0398466532_2903127274_p_3};
	xsi_register_didat("work_a_0398466532_2903127274", "isim/interpolador_funcao_tanh_isim_beh.exe.sim/work/a_0398466532_2903127274.didat");
	xsi_register_executes(pe);
}
