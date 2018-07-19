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
static const char *ng0 = "C:/Users/ds-user/KDS/source3/core.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_871414444_3536714472(char *, char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3555643245_0632001823_p_0(char *t0)
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

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6696U);
    t4 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t1, t3, t2, 18);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (18U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3672);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 18U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3604);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(18U, t6, 0);
    goto LAB6;

}

static void work_a_3555643245_0632001823_p_1(char *t0)
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

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t2 = (t0 + 6712U);
    t4 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t1, t3, t2, 18);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (18U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 3708);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 18U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3612);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(18U, t6, 0);
    goto LAB6;

}

static void work_a_3555643245_0632001823_p_2(char *t0)
{
    char t11[16];
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
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13};

LAB0:    xsi_set_current_line(81, ng0);
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
LAB3:    t1 = (t0 + 3620);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3744);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3780);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3816);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(86, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t2 = t1;
    memset(t2, (unsigned char)2, 44U);
    t5 = (t0 + 3888);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 44U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1236U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB3;

LAB8:    xsi_set_current_line(90, ng0);
    t6 = (t0 + 3780);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 3924);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(93, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB7;

LAB9:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 3960);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2U, 8U, 0LL);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 3996);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2U, 8U, 0LL);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t13 = *((unsigned int *)t6);
    t16 = (1U * t13);
    t3 = (8U != t16);
    if (t3 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 3924);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6632U);
    t5 = (t0 + 7034);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB7;

LAB10:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 3960);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2U, 8U, 0LL);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 3996);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2U, 8U, 0LL);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t13 = *((unsigned int *)t6);
    t16 = (1U * t13);
    t3 = (8U != t16);
    if (t3 == 1)
        goto LAB30;

LAB31:    t7 = (t0 + 3924);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792U);
    t5 = (t0 + 960U);
    t6 = *((char **)t5);
    t5 = (t0 + 6632U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB7;

LAB11:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB12:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3780);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB13:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3816);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2156U);
    t2 = *((char **)t1);
    t1 = (t0 + 3888);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 44U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB14:    xsi_set_current_line(94, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t5 = t1;
    memset(t5, (unsigned char)2, 44U);
    t6 = (t0 + 3888);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 44U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6632U);
    t5 = (t0 + 7008);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(96, ng0);
    t8 = (t0 + 3816);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(97, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t5 = (t0 + 3960);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 7016);
    t5 = (t0 + 3996);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3780);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 6792U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t11, t2, t1, (unsigned char)3);
    t6 = (t11 + 12U);
    t13 = *((unsigned int *)t6);
    t16 = (1U * t13);
    t3 = (8U != t16);
    if (t3 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 3924);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 6632U);
    t5 = (t0 + 7026);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB18;

LAB20:    xsi_size_not_matching(8U, t16, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(102, ng0);
    t8 = (t0 + 3744);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    goto LAB23;

LAB25:    xsi_size_not_matching(8U, t16, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(116, ng0);
    t8 = (t0 + 3744);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    goto LAB28;

LAB30:    xsi_size_not_matching(8U, t16, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(125, ng0);
    t7 = (t0 + 3780);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3744);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3744);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3780);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 3816);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 3852);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(145, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t2 = t1;
    memset(t2, (unsigned char)2, 44U);
    t5 = (t0 + 3888);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 44U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB36;

}

static void work_a_3555643245_0632001823_p_3(char *t0)
{
    char t12[16];
    char t13[16];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(153, ng0);
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
LAB3:    t1 = (t0 + 3628);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(154, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t5 = t1;
    memset(t5, (unsigned char)2, 44U);
    t6 = (t0 + 4032);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 44U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1972U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(160, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t2 = t1;
    memset(t2, (unsigned char)2, 44U);
    t5 = (t0 + 4032);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 44U);
    xsi_driver_first_trans_fast(t5);

LAB8:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB7:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2156U);
    t6 = *((char **)t2);
    t2 = (t0 + 6776U);
    t7 = (t0 + 2064U);
    t8 = *((char **)t7);
    t7 = (t0 + 6760U);
    t9 = ieee_p_3499444699_sub_871414444_3536714472(IEEE_P_3499444699, t13, t8, t7, 44);
    t10 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t6, t2, t9, t13);
    t14 = (t12 + 12U);
    t15 = *((unsigned int *)t14);
    t16 = (1U * t15);
    t17 = (44U != t16);
    if (t17 == 1)
        goto LAB10;

LAB11:    t18 = (t0 + 4032);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memcpy(t22, t10, 44U);
    xsi_driver_first_trans_fast(t18);
    goto LAB8;

LAB10:    xsi_size_not_matching(44U, t16, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(163, ng0);
    t1 = xsi_get_transient_memory(44U);
    memset(t1, 0, 44U);
    t5 = t1;
    memset(t5, (unsigned char)2, 44U);
    t6 = (t0 + 4032);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 44U);
    xsi_driver_first_trans_fast(t6);
    goto LAB13;

}


extern void work_a_3555643245_0632001823_init()
{
	static char *pe[] = {(void *)work_a_3555643245_0632001823_p_0,(void *)work_a_3555643245_0632001823_p_1,(void *)work_a_3555643245_0632001823_p_2,(void *)work_a_3555643245_0632001823_p_3};
	xsi_register_didat("work_a_3555643245_0632001823", "isim/core_tb_isim_beh.exe.sim/work/a_3555643245_0632001823.didat");
	xsi_register_executes(pe);
}
