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
static const char *ng0 = "C:/Users/ds-user/KDS/source3/core_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


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

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t1 = (t0 + 1500U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2728);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t8 = (t0 + 1568U);
    t9 = *((char **)t8);
    t10 = *((int64 *)t9);
    t11 = (5 * t10);
    t8 = (t0 + 1500U);
    t12 = *((char **)t8);
    t13 = *((unsigned char *)t12);
    t14 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t13);
    t8 = (t0 + 2728);
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

LAB0:    xsi_set_current_line(37, ng0);
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
LAB8:    t17 = (t0 + 1568U);
    t18 = *((char **)t17);
    t19 = *((int64 *)t18);
    t20 = (t19 / 2);
    t17 = (t0 + 2764);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_delta(t17, 0U, 1, t20);
    t25 = (t0 + 2764);
    xsi_driver_intertial_reject(t25, t20, t20);

LAB2:    t26 = (t0 + 2676);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1568U);
    t9 = *((char **)t2);
    t10 = *((int64 *)t9);
    t11 = (t10 / 2);
    t2 = (t0 + 2764);
    t12 = (t2 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t11);
    t16 = (t0 + 2764);
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

void work_a_2260645100_0479980441_sub_2341430958_998327968(char *t0, char *t1, int t2)
{
    char t3[72];
    char t4[8];
    char t8[8];
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned int t28;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 552);
    t7 = (t5 + 52U);
    *((char **)t7) = t6;
    t9 = (t5 + 36U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 48U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;
    t12 = (t0 + 1636U);
    t13 = *((char **)t12);
    t14 = (t2 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, t2);
    t16 = (64U * t15);
    t17 = (0 + t16);
    t18 = (t17 + 52U);
    t12 = (t13 + t18);
    xsi_report(t12, 6U, (unsigned char)0);
    t6 = (t0 + 1636U);
    t7 = *((char **)t6);
    t14 = (t2 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, t2);
    t16 = (64U * t15);
    t17 = (0 + t16);
    t18 = (t17 + 0U);
    t6 = (t7 + t18);
    t9 = (t0 + 2836);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t13 = (t12 + 40U);
    t19 = *((char **)t13);
    t20 = (t0 + 5020U);
    t21 = (t20 + 12U);
    t22 = *((unsigned int *)t21);
    t22 = (t22 * 1U);
    memcpy(t19, t6, t22);
    xsi_driver_first_trans_fast(t9);
    t6 = (t0 + 2872);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((int *)t6) = 0;
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t1, 1);
    t6 = (t0 + 2872);
    t7 = (t6 + 32U);
    t9 = *((char **)t7);
    t10 = (t9 + 40U);
    t12 = *((char **)t10);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t23 = (t14 + 1);
    t6 = (t5 + 36U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t23;
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t1, 1);

LAB2:    t6 = (t0 + 1052U);
    t7 = *((char **)t6);
    t24 = *((unsigned char *)t7);
    t25 = (t24 == (unsigned char)2);
    if (t25 != 0)
        goto LAB3;

LAB5:    t6 = (t0 + 5020U);
    t7 = (t6 + 12U);
    t15 = *((unsigned int *)t7);
    t15 = (t15 * 1U);
    t9 = xsi_get_transient_memory(t15);
    memset(t9, 0, t15);
    t10 = t9;
    memset(t10, (unsigned char)2, t15);
    t12 = (t0 + 2836);
    t13 = (t12 + 32U);
    t19 = *((char **)t13);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t26 = (t0 + 5020U);
    t27 = (t26 + 12U);
    t16 = *((unsigned int *)t27);
    t16 = (t16 * 1U);
    memcpy(t21, t9, t16);
    xsi_driver_first_trans_fast(t12);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t6 = (t0 + 2908);
    t9 = (t6 + 32U);
    t10 = *((char **)t9);
    t12 = (t10 + 40U);
    t13 = *((char **)t12);
    *((int *)t13) = t14;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    t6 = (t0 + 1328U);
    t7 = *((char **)t6);
    t6 = (t0 + 5036U);
    t9 = (t6 + 12U);
    t15 = *((unsigned int *)t9);
    t15 = (t15 * 1U);
    t10 = (t0 + 1636U);
    t12 = *((char **)t10);
    t14 = (t2 - 0);
    t16 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 6, 1, t2);
    t17 = (64U * t16);
    t18 = (0 + t17);
    t22 = (t18 + 8U);
    t10 = (t12 + t22);
    t24 = 1;
    if (t15 == 44U)
        goto LAB8;

LAB9:    t24 = 0;

LAB10:    if (t24 == 0)
        goto LAB6;

LAB7:
LAB1:    return;
LAB3:    t6 = (t5 + 36U);
    t9 = *((char **)t6);
    t14 = *((int *)t9);
    t23 = (t14 + 1);
    t6 = (t5 + 36U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t23;
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t1, 1);
    goto LAB2;

LAB4:;
LAB6:    t20 = (t0 + 5652);
    xsi_report(t20, 12U, (unsigned char)2);
    goto LAB7;

LAB8:    t28 = 0;

LAB11:    if (t28 < t15)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t13 = (t7 + t28);
    t19 = (t10 + t28);
    if (*((unsigned char *)t13) != *((unsigned char *)t19))
        goto LAB9;

LAB13:    t28 = (t28 + 1);
    goto LAB11;

}

static void work_a_2260645100_0479980441_p_2(char *t0)
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
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    int t17;
    int t18;
    int t19;

LAB0:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2800);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);

LAB6:    t2 = (t0 + 2684);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 2684);
    *((int *)t4) = 0;
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5664);
    *((int *)t2) = 0;
    t3 = (t0 + 5668);
    *((int *)t3) = 6;
    t17 = 0;
    t18 = 6;

LAB14:    if (t17 <= t18)
        goto LAB15;

LAB17:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5672);
    xsi_report(t2, 12U, (unsigned char)0);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2800);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);

LAB21:    *((char **)t1) = &&LAB22;
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
    t4 = (t0 + 1500U);
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

LAB15:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 2380);
    t5 = (t0 + 5664);
    work_a_2260645100_0479980441_sub_2341430958_998327968(t0, t4, *((int *)t5));
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2380);
    work_a_2260645100_0479980441_sub_729878686_998327968(t0, t2, 10);

LAB16:    t2 = (t0 + 5664);
    t17 = *((int *)t2);
    t3 = (t0 + 5668);
    t18 = *((int *)t3);
    if (t17 == t18)
        goto LAB17;

LAB18:    t19 = (t17 + 1);
    t17 = t19;
    t4 = (t0 + 5664);
    *((int *)t4) = t17;
    goto LAB14;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}


extern void work_a_2260645100_0479980441_init()
{
	static char *pe[] = {(void *)work_a_2260645100_0479980441_p_0,(void *)work_a_2260645100_0479980441_p_1,(void *)work_a_2260645100_0479980441_p_2};
	static char *se[] = {(void *)work_a_2260645100_0479980441_sub_729878686_998327968,(void *)work_a_2260645100_0479980441_sub_2341430958_998327968};
	xsi_register_didat("work_a_2260645100_0479980441", "isim/core_tb_isim_beh.exe.sim/work/a_2260645100_0479980441.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
