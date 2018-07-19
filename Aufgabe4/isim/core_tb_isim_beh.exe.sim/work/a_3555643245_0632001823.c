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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/ds-user/KDS/source4/core.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_871414444_3536714472(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_674763465_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3555643245_0632001823_p_0(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 9647);
    t3 = (t0 + 1052U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 2332);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (1 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 9060U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (2U + 8U);
    t12 = (10U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 4988);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 10U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 4904);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t11, 0);
    goto LAB6;

}

static void work_a_3555643245_0632001823_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 5024);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4912);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3555643245_0632001823_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t2 = (t0 + 9092U);
    t4 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t1, t3, t2, 18);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (18U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5060);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 18U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4920);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(18U, t6, 0);
    goto LAB6;

}

static void work_a_3555643245_0632001823_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t2 = (t0 + 1420U);
    t3 = *((char **)t2);
    t2 = (t0 + 9108U);
    t4 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t1, t3, t2, 18);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (18U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 5096);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 18U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4928);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(18U, t6, 0);
    goto LAB6;

}

static void work_a_3555643245_0632001823_p_4(char *t0)
{
    char t11[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5132);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5168);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5204);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5276);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(130, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 5348);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    xsi_set_current_line(199, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB48;

LAB50:
LAB49:    goto LAB3;

LAB8:    xsi_set_current_line(134, ng0);
    t6 = (t0 + 5168);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5276);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(138, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5384);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(139, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5420);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(140, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5456);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(141, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5492);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 5528);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, 6U, 4U, 0LL);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 5600);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_delta(t1, 2U, 4U, 0LL);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 9300U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (4U != t13);
    if (t3 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 5384);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5132);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 2892U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 9332U);
    t8 = (t0 + 9300U);
    t1 = xsi_base_array_concat(t1, t11, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t12 = (4U + 4U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 5528);
    t10 = (t9 + 32U);
    t14 = *((char **)t10);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_delta(t9, 2U, 8U, 0LL);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 2984U);
    t5 = *((char **)t1);
    t6 = ((IEEE_P_2592010699) + 2332);
    t7 = (t0 + 9300U);
    t8 = (t0 + 9316U);
    t1 = xsi_base_array_concat(t1, t11, t6, (char)97, t2, t7, (char)97, t5, t8, (char)101);
    t12 = (4U + 4U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5600);
    t10 = (t9 + 32U);
    t14 = *((char **)t10);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memcpy(t16, t1, 8U);
    xsi_driver_first_trans_delta(t9, 2U, 8U, 0LL);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 9300U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (4U != t13);
    if (t3 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 5384);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 5276);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 9300U);
    t5 = (t0 + 9659);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t17 = (3 - 0);
    t12 = (t17 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB27;

LAB29:    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 9300U);
    t5 = (t0 + 9671);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t17 = (3 - 0);
    t12 = (t17 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB40;

LAB41:
LAB28:    goto LAB7;

LAB11:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 5132);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 5168);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB12:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 5132);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB13:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 5132);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5276);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 9348U);
    t5 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB46;

LAB47:    t7 = (t0 + 5564);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_delta(t7, 2U, 8U, 0LL);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 5204);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(196, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t12 = (43 - 15);
    t13 = (t12 * 1U);
    t22 = (0 + t13);
    t1 = (t2 + t22);
    t5 = (t0 + 5348);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB7;

LAB14:    xsi_set_current_line(143, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)2, 16U);
    t6 = (t0 + 5348);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(144, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 5528);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(145, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 5564);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 9649);
    t5 = (t0 + 5600);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2892U);
    t2 = *((char **)t1);
    t1 = (t0 + 9300U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (4U != t13);
    if (t3 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 5384);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 5168);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 5132);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_size_not_matching(4U, t13, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(4U, t13, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t12, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t12, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t13, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(166, ng0);
    t8 = (t0 + 2984U);
    t9 = *((char **)t8);
    t8 = (t0 + 9316U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t18, t9, t8, (unsigned char)3);
    t14 = (t18 + 12U);
    t12 = *((unsigned int *)t14);
    t13 = (1U * t12);
    t4 = (4U != t13);
    if (t4 == 1)
        goto LAB30;

LAB31:    t15 = (t0 + 5456);
    t16 = (t15 + 32U);
    t19 = *((char **)t16);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    t1 = (t0 + 9316U);
    t5 = (t0 + 9663);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t17 = (3 - 0);
    t12 = (t17 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB28;

LAB30:    xsi_size_not_matching(4U, t13, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(168, ng0);
    t8 = (t0 + 3076U);
    t9 = *((char **)t8);
    t8 = (t0 + 9332U);
    t10 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t18, t9, t8, (unsigned char)3);
    t14 = (t18 + 12U);
    t12 = *((unsigned int *)t14);
    t13 = (1U * t12);
    t4 = (4U != t13);
    if (t4 == 1)
        goto LAB35;

LAB36:    t15 = (t0 + 5420);
    t16 = (t15 + 32U);
    t19 = *((char **)t16);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 4U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 3076U);
    t2 = *((char **)t1);
    t1 = (t0 + 9332U);
    t5 = (t0 + 9667);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t17 = (3 - 0);
    t12 = (t17 * 1);
    t12 = (t12 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t12;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB37;

LAB39:
LAB38:    goto LAB33;

LAB35:    xsi_size_not_matching(4U, t13, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(170, ng0);
    t8 = (t0 + 5132);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB38;

LAB40:    xsi_set_current_line(176, ng0);
    t8 = (t0 + 5276);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(177, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 9348U);
    t5 = ieee_p_3620187407_sub_674763465_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB42;

LAB43:    t7 = (t0 + 5564);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_delta(t7, 2U, 8U, 0LL);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t12 = (43 - 15);
    t13 = (t12 * 1U);
    t22 = (0 + t13);
    t1 = (t2 + t22);
    t5 = (t0 + 5348);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    t1 = (t0 + 9348U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t12 = *((unsigned int *)t6);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB44;

LAB45:    t7 = (t0 + 5492);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB28;

LAB42:    xsi_size_not_matching(8U, t13, 0);
    goto LAB43;

LAB44:    xsi_size_not_matching(8U, t13, 0);
    goto LAB45;

LAB46:    xsi_size_not_matching(8U, t13, 0);
    goto LAB47;

LAB48:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 5132);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 5168);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 5204);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 5276);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 5312);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 5240);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(206, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t5 = (t0 + 5348);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB49;

}

static void work_a_3555643245_0632001823_p_5(char *t0)
{
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(215, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t5 = t1;
    memset(t5, (unsigned char)2, 44U);
    t6 = (t0 + 5636);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 44U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 2524U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:
LAB8:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB3;

LAB7:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 2892U);
    t6 = *((char **)t2);
    t2 = (t0 + 9300U);
    t7 = (t0 + 9675);
    t9 = (t12 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t14;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t6, t2, t7, t12);
    if (t15 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(221, ng0);
    t1 = (t0 + 2800U);
    t2 = *((char **)t1);
    t1 = (t0 + 9284U);
    t5 = (t0 + 2708U);
    t6 = *((char **)t5);
    t5 = (t0 + 9268U);
    t7 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t16, t6, t5, 44);
    t8 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t2, t1, t7, t16);
    t9 = (t12 + 12U);
    t14 = *((unsigned int *)t9);
    t26 = (1U * t14);
    t3 = (44U != t26);
    if (t3 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 5636);
    t17 = (t10 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t21 = *((char **)t19);
    memcpy(t21, t8, 44U);
    xsi_driver_first_trans_fast(t10);

LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(219, ng0);
    t10 = (t0 + 2708U);
    t17 = *((char **)t10);
    t10 = (t0 + 9268U);
    t18 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t16, t17, t10, 44);
    t19 = (t16 + 12U);
    t14 = *((unsigned int *)t19);
    t14 = (t14 * 1U);
    t20 = (44U != t14);
    if (t20 == 1)
        goto LAB13;

LAB14:    t21 = (t0 + 5636);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memcpy(t25, t18, 44U);
    xsi_driver_first_trans_fast(t21);
    goto LAB11;

LAB13:    xsi_size_not_matching(44U, t14, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(44U, t26, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(227, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t5 = t1;
    memset(t5, (unsigned char)2, 44U);
    t6 = (t0 + 5636);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 44U);
    xsi_driver_first_trans_fast(t6);
    goto LAB18;

}


extern void work_a_3555643245_0632001823_init()
{
	static char *pe[] = {(void *)work_a_3555643245_0632001823_p_0,(void *)work_a_3555643245_0632001823_p_1,(void *)work_a_3555643245_0632001823_p_2,(void *)work_a_3555643245_0632001823_p_3,(void *)work_a_3555643245_0632001823_p_4,(void *)work_a_3555643245_0632001823_p_5};
	xsi_register_didat("work_a_3555643245_0632001823", "isim/core_tb_isim_beh.exe.sim/work/a_3555643245_0632001823.didat");
	xsi_register_executes(pe);
}
