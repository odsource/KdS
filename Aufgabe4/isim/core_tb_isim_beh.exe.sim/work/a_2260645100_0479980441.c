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
static const char *ng0 = "C:/Users/ds-user/KDS/source4/core_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_2260645100_0479980441_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 1568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2964);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t8 = (t0 + 1636U);
    t9 = *((char **)t8);
    t10 = *((int64 *)t9);
    t11 = (5 * t10);
    t8 = (t0 + 1568U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t13);
    t8 = (t0 + 2964);
    t15 = (t8 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t11);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2260645100_0479980441_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    int64 t10;
    int64 t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t17 = (t0 + 1636U);
    t18 = *((char **)t17);
    t19 = *((int64 *)t18);
    t20 = (t19 / 2);
    t17 = (t0 + 3000);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t17, 0U, 1, t20);
    t25 = (t0 + 3000);
    xsi_driver_intertial_reject(t25, t20, t20);

LAB2:    t26 = (t0 + 2888);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1636U);
    t9 = *((char **)t2);
    t10 = *((int64 *)t9);
    t11 = (t10 / 2);
    t2 = (t0 + 3000);
    t12 = (t2 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t11);
    t16 = (t0 + 3000);
    xsi_driver_intertial_reject(t16, t11, t11);
    goto LAB2;

LAB5:    t2 = (t0 + 776U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

void work_a_2260645100_0479980441_sub_729878686_998327968(char *t0, char *t1, int t2)
{
    char t4[8];
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
    char *t27;
    char *t28;
    unsigned char t29;
    unsigned char t30;
    int t31;

LAB0:    t5 = (t4 + 4U);
    *((int *)t5) = t2;
    t6 = 1;
    t7 = t2;

LAB2:    if (t6 <= t7)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t8 = (t0 + 660U);
    xsi_add_dynamic_wait(t1, t8, -1, -1);
    t9 = (t0 + 660U);
    xsi_add_dynamic_wait(t1, t9, -1, -1);

LAB9:    t10 = (t1 + 128U);
    t10 = *((char **)t10);
    xsi_wp_set_status(t10, 1);
    t11 = (t1 + 48U);
    t12 = *((char **)t11);
    t13 = (t12 + 1440U);
    *((unsigned int *)t13) = 1U;
    t14 = (t1 + 48U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    getcontext(t16);
    t17 = (t1 + 48U);
    t18 = *((char **)t17);
    t19 = (t18 + 1440U);
    t20 = *((unsigned int *)t19);
    if (t20 == 1)
        goto LAB10;

LAB11:    t21 = (t1 + 48U);
    t22 = *((char **)t21);
    t23 = (t22 + 1440U);
    *((unsigned int *)t23) = 3U;

LAB7:
LAB8:    t25 = (t0 + 660U);
    t26 = xsi_signal_has_event(t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    t24 = (unsigned char)0;

LAB14:    if (t24 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:    if (t6 == t7)
        goto LAB5;

LAB15:    t31 = (t6 + 1);
    t6 = t31;
    goto LAB2;

LAB6:    xsi_remove_dynamic_wait(t1, t8);
    xsi_remove_dynamic_wait(t1, t9);
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t27 = (t0 + 684U);
    t28 = *((char **)t27);
    t29 = *((unsigned char *)t28);
    t30 = (t29 == (unsigned char)3);
    t24 = t30;
    goto LAB14;

}

static void work_a_2260645100_0479980441_p_2(char *t0)
{
    char t23[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    char *t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3036);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3072);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);

LAB6:    t2 = (t0 + 2896);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 2896);
    *((int *)t4) = 0;
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2448);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 10);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3072);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2448);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3072);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2448);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 5);
    xsi_set_current_line(109, ng0);

LAB16:    t2 = (t0 + 2904);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB5:    t3 = (t0 + 660U);
    t9 = xsi_signal_has_event(t3);
    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 592U);
    t6 = *((char **)t4);
    t12 = *((unsigned char *)t6);
    t4 = (t0 + 1568U);
    t13 = *((char **)t4);
    t14 = *((unsigned char *)t13);
    t15 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t14);
    t16 = (t12 == t15);
    t7 = t16;
    goto LAB10;

LAB11:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB13;

LAB14:    t4 = (t0 + 2904);
    *((int *)t4) = 0;
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1500U);
    t3 = *((char **)t2);
    t17 = *((int *)t3);
    t2 = (t0 + 1500U);
    t4 = *((char **)t2);
    t18 = *((int *)t4);
    t19 = (t17 * t18);
    t20 = (t19 - 1);
    t2 = (t0 + 6276);
    *((int *)t2) = 0;
    t5 = (t0 + 6280);
    *((int *)t5) = t20;
    t21 = 0;
    t22 = t20;

LAB24:    if (t21 <= t22)
        goto LAB25;

LAB27:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2448);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 1);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3036);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB15:    t3 = (t0 + 660U);
    t9 = xsi_signal_has_event(t3);
    if (t9 == 1)
        goto LAB21;

LAB22:    t8 = (unsigned char)0;

LAB23:    if (t8 == 1)
        goto LAB18;

LAB19:    t7 = (unsigned char)0;

LAB20:    if (t7 == 1)
        goto LAB14;
    else
        goto LAB16;

LAB17:    goto LAB15;

LAB18:    t4 = (t0 + 1144U);
    t6 = *((char **)t4);
    t12 = *((unsigned char *)t6);
    t14 = (t12 == (unsigned char)3);
    t7 = t14;
    goto LAB20;

LAB21:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB23;

LAB25:    xsi_set_current_line(112, ng0);
    t6 = (t0 + 6276);
    t13 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t23, *((int *)t6), 8);
    t24 = (t23 + 12U);
    t25 = *((unsigned int *)t24);
    t25 = (t25 * 1U);
    t7 = (8U != t25);
    if (t7 == 1)
        goto LAB28;

LAB29:    t26 = (t0 + 3108);
    t27 = (t26 + 32U);
    t28 = *((char **)t27);
    t29 = (t28 + 40U);
    t30 = *((char **)t29);
    memcpy(t30, t13, 8U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2448);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1328U);
    t3 = *((char **)t2);
    t2 = (t0 + 5156U);
    t17 = ieee_std_logic_arith_conv_integer_signed(IEEE_P_3499444699, t3, t2);
    t4 = (t0 + 1704U);
    t5 = *((char **)t4);
    t4 = (t0 + 6276);
    t18 = *((int *)t4);
    t19 = (t18 - 0);
    t25 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, *((int *)t4));
    t31 = (4U * t25);
    t32 = (0 + t31);
    t6 = (t5 + t32);
    t20 = *((int *)t6);
    t7 = (t17 == t20);
    if (t7 == 0)
        goto LAB30;

LAB31:
LAB26:    t2 = (t0 + 6276);
    t21 = *((int *)t2);
    t3 = (t0 + 6280);
    t22 = *((int *)t3);
    if (t21 == t22)
        goto LAB27;

LAB32:    t17 = (t21 + 1);
    t21 = t17;
    t4 = (t0 + 6276);
    *((int *)t4) = t21;
    goto LAB24;

LAB28:    xsi_size_not_matching(8U, t25, 0);
    goto LAB29;

LAB30:    t13 = (t0 + 6284);
    xsi_report(t13, 11U, (unsigned char)2);
    goto LAB31;

LAB33:    goto LAB2;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

}

static void work_a_2260645100_0479980441_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    int t15;
    char *t16;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3144);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);

LAB6:    t2 = (t0 + 2912);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 2912);
    *((int *)t4) = 0;
    xsi_set_current_line(126, ng0);

LAB14:
LAB15:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1052U);
    t3 = *((char **)t2);
    t14 = *((int *)t3);
    t15 = (t14 + 1);
    t2 = (t0 + 3144);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t16 = *((char **)t6);
    *((int *)t16) = t15;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);

LAB20:    t2 = (t0 + 2920);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB5:    t3 = (t0 + 660U);
    t9 = xsi_signal_has_event(t3);
    if (t9 == 1)
        goto LAB11;

LAB12:    t8 = (unsigned char)0;

LAB13:    if (t8 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 960U);
    t6 = *((char **)t4);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    t7 = t13;
    goto LAB10;

LAB11:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB13;

LAB16:;
LAB17:    xsi_set_current_line(131, ng0);

LAB28:    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB18:    t4 = (t0 + 2920);
    *((int *)t4) = 0;
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1144U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB17;

LAB25:    goto LAB14;

LAB19:    t3 = (t0 + 660U);
    t8 = xsi_signal_has_event(t3);
    if (t8 == 1)
        goto LAB22;

LAB23:    t7 = (unsigned char)0;

LAB24:    if (t7 == 1)
        goto LAB18;
    else
        goto LAB20;

LAB21:    goto LAB19;

LAB22:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t7 = t10;
    goto LAB24;

LAB26:    goto LAB2;

LAB27:    goto LAB26;

LAB29:    goto LAB27;

}


extern void work_a_2260645100_0479980441_init()
{
	static char *pe[] = {(void *)work_a_2260645100_0479980441_p_0,(void *)work_a_2260645100_0479980441_p_1,(void *)work_a_2260645100_0479980441_p_2,(void *)work_a_2260645100_0479980441_p_3};
	static char *se[] = {(void *)work_a_2260645100_0479980441_sub_729878686_998327968};
	xsi_register_didat("work_a_2260645100_0479980441", "isim/core_tb_isim_beh.exe.sim/work/a_2260645100_0479980441.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
