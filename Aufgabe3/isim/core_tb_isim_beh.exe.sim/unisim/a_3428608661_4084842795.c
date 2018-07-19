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
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *UNISIM_P_3222816464;

unsigned char ieee_p_2592010699_sub_1600845279_503743352(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
int unisim_p_3222816464_sub_3182959421_279109243(char *, char *, char *);


char *unisim_a_3428608661_4084842795_sub_338347530_1929794647(char *t1, char *t2, int t3, int t4)
{
    char t5[144];
    char t6[16];
    char t10[16];
    char t25[8];
    char *t0;
    int t7;
    int t8;
    unsigned int t9;
    int t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    unsigned char t33;
    int t34;
    int t35;
    int t36;
    int t37;
    unsigned int t38;

LAB0:    t7 = (t4 - 1);
    t8 = (0 - t7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t9 = (t9 * 1U);
    t11 = (t4 - 1);
    t12 = (t10 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = t11;
    t13 = (t12 + 4U);
    *((int *)t13) = 0;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - t11);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t5 + 4U);
    t16 = ((IEEE_P_2592010699) + 2332);
    t17 = (t13 + 52U);
    *((char **)t17) = t16;
    t18 = (char *)alloca(t9);
    t19 = (t13 + 36U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t10);
    t20 = (t13 + 40U);
    *((char **)t20) = t10;
    t21 = (t13 + 48U);
    *((unsigned int *)t21) = t9;
    t22 = (t5 + 72U);
    t23 = ((STD_STANDARD) + 240);
    t24 = (t22 + 52U);
    *((char **)t24) = t23;
    t26 = (t22 + 36U);
    *((char **)t26) = t25;
    *((int *)t25) = t3;
    t27 = (t22 + 48U);
    *((unsigned int *)t27) = 4U;
    t28 = (t6 + 4U);
    *((int *)t28) = t3;
    t29 = (t6 + 8U);
    *((int *)t29) = t4;
    t30 = (t22 + 36U);
    t31 = *((char **)t30);
    t30 = (t31 + 0);
    *((int *)t30) = t3;
    t7 = (t4 - 1);
    t8 = 0;
    t11 = t7;

LAB2:    if (t8 <= t11)
        goto LAB3;

LAB5:    t12 = (t13 + 36U);
    t16 = *((char **)t12);
    t12 = (t10 + 12U);
    t9 = *((unsigned int *)t12);
    t9 = (t9 * 1U);
    t0 = xsi_get_transient_memory(t9);
    memcpy(t0, t16, t9);
    t17 = (t10 + 0U);
    t7 = *((int *)t17);
    t19 = (t10 + 4U);
    t8 = *((int *)t19);
    t20 = (t10 + 8U);
    t11 = *((int *)t20);
    t21 = (t2 + 0U);
    t23 = (t21 + 0U);
    *((int *)t23) = t7;
    t23 = (t21 + 4U);
    *((int *)t23) = t8;
    t23 = (t21 + 8U);
    *((int *)t23) = t11;
    t14 = (t8 - t7);
    t15 = (t14 * t11);
    t15 = (t15 + 1);
    t23 = (t21 + 12U);
    *((unsigned int *)t23) = t15;

LAB1:    return t0;
LAB3:    t12 = (t22 + 36U);
    t16 = *((char **)t12);
    t14 = *((int *)t16);
    t32 = xsi_vhdl_mod(t14, 2);
    t33 = (t32 == 1);
    if (t33 != 0)
        goto LAB6;

LAB8:    t12 = (t13 + 36U);
    t16 = *((char **)t12);
    t12 = (t10 + 0U);
    t7 = *((int *)t12);
    t17 = (t10 + 8U);
    t14 = *((int *)t17);
    t32 = (t8 - t7);
    t9 = (t32 * t14);
    t19 = (t10 + 4U);
    t34 = *((int *)t19);
    xsi_vhdl_check_range_of_index(t7, t34, t14, t8);
    t15 = (1U * t9);
    t38 = (0 + t15);
    t20 = (t16 + t38);
    *((unsigned char *)t20) = (unsigned char)2;

LAB7:    t12 = (t22 + 36U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t33 = (t7 > 0);
    if (t33 != 0)
        goto LAB9;

LAB11:    t12 = (t22 + 36U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    if (-2147483648 > 2147483647)
        goto LAB14;

LAB15:    if (1 == -1)
        goto LAB19;

LAB20:    t14 = -2147483648;

LAB16:    t33 = (t7 > t14);
    if (t33 != 0)
        goto LAB12;

LAB13:    t12 = (t22 + 36U);
    t16 = *((char **)t12);
    t7 = *((int *)t16);
    t14 = (t7 / 2);
    t12 = (t22 + 36U);
    t17 = *((char **)t12);
    t12 = (t17 + 0);
    *((int *)t12) = t14;

LAB10:
LAB4:    if (t8 == t11)
        goto LAB5;

LAB21:    t7 = (t8 + 1);
    t8 = t7;
    goto LAB2;

LAB6:    t12 = (t13 + 36U);
    t17 = *((char **)t12);
    t12 = (t10 + 0U);
    t34 = *((int *)t12);
    t19 = (t10 + 8U);
    t35 = *((int *)t19);
    t36 = (t8 - t34);
    t9 = (t36 * t35);
    t20 = (t10 + 4U);
    t37 = *((int *)t20);
    xsi_vhdl_check_range_of_index(t34, t37, t35, t8);
    t15 = (1U * t9);
    t38 = (0 + t15);
    t21 = (t17 + t38);
    *((unsigned char *)t21) = (unsigned char)3;
    goto LAB7;

LAB9:    t12 = (t22 + 36U);
    t17 = *((char **)t12);
    t14 = *((int *)t17);
    t32 = (t14 / 2);
    t12 = (t22 + 36U);
    t19 = *((char **)t12);
    t12 = (t19 + 0);
    *((int *)t12) = t32;
    goto LAB10;

LAB12:    t12 = (t22 + 36U);
    t17 = *((char **)t12);
    t32 = *((int *)t17);
    t34 = (t32 - 1);
    t35 = (t34 / 2);
    t12 = (t22 + 36U);
    t19 = *((char **)t12);
    t12 = (t19 + 0);
    *((int *)t12) = t35;
    goto LAB10;

LAB14:    if (1 == 1)
        goto LAB17;

LAB18:    t14 = 2147483647;
    goto LAB16;

LAB17:    t14 = -2147483648;
    goto LAB16;

LAB19:    t14 = 2147483647;
    goto LAB16;

LAB22:;
}

char *unisim_a_3428608661_4084842795_sub_4109895630_1929794647(char *t1, char *t2, char *t3, char *t4)
{
    char t5[144];
    char t6[16];
    char t11[16];
    char t27[8];
    char *t0;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    int t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    unsigned char t39;
    unsigned char t40;
    int t41;
    char *t42;
    int t43;
    int t44;
    char *t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned char t50;
    char *t51;
    char *t52;
    int t53;
    char *t54;
    int t55;
    int t56;
    unsigned int t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;

LAB0:    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t9 = (0 - t8);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t10 = (t10 * 1U);
    t12 = (t4 + 0U);
    t13 = *((int *)t12);
    t14 = (t11 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = t13;
    t15 = (t14 + 4U);
    *((int *)t15) = 0;
    t15 = (t14 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - t13);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((IEEE_P_2592010699) + 2332);
    t19 = (t15 + 52U);
    *((char **)t19) = t18;
    t20 = (char *)alloca(t10);
    t21 = (t15 + 36U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t11);
    t22 = (t15 + 40U);
    *((char **)t22) = t11;
    t23 = (t15 + 48U);
    *((unsigned int *)t23) = t10;
    t24 = (t5 + 72U);
    t25 = ((IEEE_P_2592010699) + 1852);
    t26 = (t24 + 52U);
    *((char **)t26) = t25;
    t28 = (t24 + 36U);
    *((char **)t28) = t27;
    *((unsigned char *)t27) = (unsigned char)2;
    t29 = (t24 + 48U);
    *((unsigned int *)t29) = 1U;
    t30 = (t6 + 4U);
    t31 = (t3 != 0);
    if (t31 == 1)
        goto LAB3;

LAB2:    t32 = (t6 + 8U);
    *((char **)t32) = t4;
    t33 = (t4 + 0U);
    t34 = *((int *)t33);
    t35 = 0;
    t36 = t34;

LAB4:    if (t35 <= t36)
        goto LAB5;

LAB7:    t7 = (t15 + 36U);
    t12 = *((char **)t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t12, t10);
    t14 = (t11 + 0U);
    t8 = *((int *)t14);
    t18 = (t11 + 4U);
    t9 = *((int *)t18);
    t19 = (t11 + 8U);
    t13 = *((int *)t19);
    t21 = (t2 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t8;
    t22 = (t21 + 4U);
    *((int *)t22) = t9;
    t22 = (t21 + 8U);
    *((int *)t22) = t13;
    t16 = (t9 - t8);
    t17 = (t16 * t13);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;

LAB1:    return t0;
LAB3:    *((char **)t30) = t3;
    goto LAB2;

LAB5:    t37 = (t24 + 36U);
    t38 = *((char **)t37);
    t39 = *((unsigned char *)t38);
    t40 = (t39 == (unsigned char)2);
    if (t40 != 0)
        goto LAB8;

LAB10:    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t12 = (t4 + 8U);
    t9 = *((int *)t12);
    t13 = (t35 - t8);
    t10 = (t13 * t9);
    t14 = (t4 + 4U);
    t16 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t8, t16, t9, t35);
    t17 = (1U * t10);
    t47 = (0 + t17);
    t18 = (t3 + t47);
    t31 = *((unsigned char *)t18);
    t39 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t31);
    t19 = (t15 + 36U);
    t21 = *((char **)t19);
    t19 = (t11 + 0U);
    t34 = *((int *)t19);
    t22 = (t11 + 8U);
    t41 = *((int *)t22);
    t43 = (t35 - t34);
    t48 = (t43 * t41);
    t23 = (t11 + 4U);
    t44 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t34, t44, t41, t35);
    t57 = (1U * t48);
    t60 = (0 + t57);
    t25 = (t21 + t60);
    *((unsigned char *)t25) = t39;

LAB9:
LAB6:    if (t35 == t36)
        goto LAB7;

LAB14:    t8 = (t35 + 1);
    t35 = t8;
    goto LAB4;

LAB8:    t37 = (t4 + 0U);
    t41 = *((int *)t37);
    t42 = (t4 + 8U);
    t43 = *((int *)t42);
    t44 = (t35 - t41);
    t17 = (t44 * t43);
    t45 = (t4 + 4U);
    t46 = *((int *)t45);
    xsi_vhdl_check_range_of_index(t41, t46, t43, t35);
    t47 = (1U * t17);
    t48 = (0 + t47);
    t49 = (t3 + t48);
    t50 = *((unsigned char *)t49);
    t51 = (t15 + 36U);
    t52 = *((char **)t51);
    t51 = (t11 + 0U);
    t53 = *((int *)t51);
    t54 = (t11 + 8U);
    t55 = *((int *)t54);
    t56 = (t35 - t53);
    t57 = (t56 * t55);
    t58 = (t11 + 4U);
    t59 = *((int *)t58);
    xsi_vhdl_check_range_of_index(t53, t59, t55, t35);
    t60 = (1U * t57);
    t61 = (0 + t60);
    t62 = (t52 + t61);
    *((unsigned char *)t62) = t50;
    t7 = (t4 + 0U);
    t8 = *((int *)t7);
    t12 = (t4 + 8U);
    t9 = *((int *)t12);
    t13 = (t35 - t8);
    t10 = (t13 * t9);
    t14 = (t4 + 4U);
    t16 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t8, t16, t9, t35);
    t17 = (1U * t10);
    t47 = (0 + t17);
    t18 = (t3 + t47);
    t31 = *((unsigned char *)t18);
    t39 = (t31 == (unsigned char)3);
    if (t39 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    t19 = (t24 + 36U);
    t21 = *((char **)t19);
    t19 = (t21 + 0);
    *((unsigned char *)t19) = (unsigned char)3;
    goto LAB12;

LAB15:;
}

char *unisim_a_3428608661_4084842795_sub_2553455981_1929794647(char *t1, char *t2, char *t3, char *t4, char *t5, char *t6)
{
    char t7[208];
    char t8[24];
    char t12[8];
    char t19[16];
    char *t0;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    unsigned int t18;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned char t40;
    char *t41;
    char *t42;
    unsigned char t43;
    char *t44;
    unsigned char t45;
    char *t46;
    int t47;
    char *t48;
    int t49;
    char *t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned char t56;
    unsigned char t57;
    char *t58;
    int t59;
    char *t60;
    int t61;
    char *t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned char t69;
    unsigned char t70;
    char *t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    int t79;
    int t80;
    int t81;
    unsigned char t82;
    int t83;
    int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned char t89;
    unsigned char t90;
    unsigned char t91;

LAB0:    t9 = (t7 + 4U);
    t10 = ((IEEE_P_2592010699) + 1852);
    t11 = (t9 + 52U);
    *((char **)t11) = t10;
    t13 = (t9 + 36U);
    *((char **)t13) = t12;
    xsi_type_set_default_value(t10, t12, 0);
    t14 = (t9 + 48U);
    *((unsigned int *)t14) = 1U;
    t15 = (t4 + 0U);
    t16 = *((int *)t15);
    t17 = (0 - t16);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t18 = (t18 * 1U);
    t20 = (t4 + 0U);
    t21 = *((int *)t20);
    t22 = (t19 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t21;
    t23 = (t22 + 4U);
    *((int *)t23) = 0;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t24 = (0 - t21);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t7 + 72U);
    t26 = ((IEEE_P_2592010699) + 2332);
    t27 = (t23 + 52U);
    *((char **)t27) = t26;
    t28 = (char *)alloca(t18);
    t29 = (t23 + 36U);
    *((char **)t29) = t28;
    xsi_type_set_default_value(t26, t28, t19);
    t30 = (t23 + 40U);
    *((char **)t30) = t19;
    t31 = (t23 + 48U);
    *((unsigned int *)t31) = t18;
    t32 = (t7 + 140U);
    t33 = ((IEEE_P_2592010699) + 2332);
    t34 = (t32 + 52U);
    *((char **)t34) = t33;
    t35 = (char *)alloca(t18);
    t36 = (t32 + 36U);
    *((char **)t36) = t35;
    xsi_type_set_default_value(t33, t35, t19);
    t37 = (t32 + 40U);
    *((char **)t37) = t19;
    t38 = (t32 + 48U);
    *((unsigned int *)t38) = t18;
    t39 = (t8 + 4U);
    t40 = (t3 != 0);
    if (t40 == 1)
        goto LAB3;

LAB2:    t41 = (t8 + 8U);
    *((char **)t41) = t4;
    t42 = (t8 + 12U);
    t43 = (t5 != 0);
    if (t43 == 1)
        goto LAB5;

LAB4:    t44 = (t8 + 16U);
    *((char **)t44) = t6;
    t46 = (t4 + 0U);
    t47 = *((int *)t46);
    t48 = (t4 + 0U);
    t49 = *((int *)t48);
    t50 = (t4 + 8U);
    t51 = *((int *)t50);
    t52 = (t47 - t49);
    t25 = (t52 * t51);
    t53 = (1U * t25);
    t54 = (0 + t53);
    t55 = (t3 + t54);
    t56 = *((unsigned char *)t55);
    t57 = (t56 == (unsigned char)1);
    if (t57 == 1)
        goto LAB9;

LAB10:    t58 = (t6 + 0U);
    t59 = *((int *)t58);
    t60 = (t6 + 0U);
    t61 = *((int *)t60);
    t62 = (t6 + 8U);
    t63 = *((int *)t62);
    t64 = (t59 - t61);
    t65 = (t64 * t63);
    t66 = (1U * t65);
    t67 = (0 + t66);
    t68 = (t5 + t67);
    t69 = *((unsigned char *)t68);
    t70 = (t69 == (unsigned char)1);
    t45 = t70;

LAB11:    if (t45 != 0)
        goto LAB6;

LAB8:
LAB7:    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    *((unsigned char *)t10) = (unsigned char)2;
    t10 = (t23 + 36U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    t13 = (t6 + 12U);
    t18 = *((unsigned int *)t13);
    t18 = (t18 * 1U);
    memcpy(t10, t5, t18);
    t10 = (t4 + 0U);
    t16 = *((int *)t10);
    t17 = 0;
    t21 = t16;

LAB13:    if (t17 <= t21)
        goto LAB14;

LAB16:    t10 = (t32 + 36U);
    t11 = *((char **)t10);
    t10 = (t19 + 12U);
    t18 = *((unsigned int *)t10);
    t18 = (t18 * 1U);
    t0 = xsi_get_transient_memory(t18);
    memcpy(t0, t11, t18);
    t13 = (t19 + 0U);
    t16 = *((int *)t13);
    t14 = (t19 + 4U);
    t17 = *((int *)t14);
    t15 = (t19 + 8U);
    t21 = *((int *)t15);
    t20 = (t2 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = t16;
    t22 = (t20 + 4U);
    *((int *)t22) = t17;
    t22 = (t20 + 8U);
    *((int *)t22) = t21;
    t24 = (t17 - t16);
    t25 = (t24 * t21);
    t25 = (t25 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t25;

LAB1:    return t0;
LAB3:    *((char **)t39) = t3;
    goto LAB2;

LAB5:    *((char **)t42) = t5;
    goto LAB4;

LAB6:    t71 = (t19 + 12U);
    t72 = *((unsigned int *)t71);
    t72 = (t72 * 1U);
    t73 = xsi_get_transient_memory(t72);
    memset(t73, 0, t72);
    t74 = t73;
    memset(t74, (unsigned char)1, t72);
    t75 = (t32 + 36U);
    t76 = *((char **)t75);
    t75 = (t76 + 0);
    t77 = (t19 + 12U);
    t78 = *((unsigned int *)t77);
    t78 = (t78 * 1U);
    memcpy(t75, t73, t78);
    t10 = (t32 + 36U);
    t11 = *((char **)t10);
    t10 = (t19 + 12U);
    t18 = *((unsigned int *)t10);
    t18 = (t18 * 1U);
    t0 = xsi_get_transient_memory(t18);
    memcpy(t0, t11, t18);
    t13 = (t19 + 0U);
    t16 = *((int *)t13);
    t14 = (t19 + 4U);
    t17 = *((int *)t14);
    t15 = (t19 + 8U);
    t21 = *((int *)t15);
    t20 = (t2 + 0U);
    t22 = (t20 + 0U);
    *((int *)t22) = t16;
    t22 = (t20 + 4U);
    *((int *)t22) = t17;
    t22 = (t20 + 8U);
    *((int *)t22) = t21;
    t24 = (t17 - t16);
    t25 = (t24 * t21);
    t25 = (t25 + 1);
    t22 = (t20 + 12U);
    *((unsigned int *)t22) = t25;
    goto LAB1;

LAB9:    t45 = (unsigned char)1;
    goto LAB11;

LAB12:    goto LAB7;

LAB14:    t11 = (t4 + 0U);
    t24 = *((int *)t11);
    t13 = (t4 + 8U);
    t47 = *((int *)t13);
    t49 = (t17 - t24);
    t18 = (t49 * t47);
    t14 = (t4 + 4U);
    t51 = *((int *)t14);
    xsi_vhdl_check_range_of_index(t24, t51, t47, t17);
    t25 = (1U * t18);
    t53 = (0 + t25);
    t15 = (t3 + t53);
    t40 = *((unsigned char *)t15);
    t20 = (t23 + 36U);
    t22 = *((char **)t20);
    t20 = (t19 + 0U);
    t52 = *((int *)t20);
    t26 = (t19 + 8U);
    t59 = *((int *)t26);
    t61 = (t17 - t52);
    t54 = (t61 * t59);
    t27 = (t19 + 4U);
    t63 = *((int *)t27);
    xsi_vhdl_check_range_of_index(t52, t63, t59, t17);
    t65 = (1U * t54);
    t66 = (0 + t65);
    t29 = (t22 + t66);
    t43 = *((unsigned char *)t29);
    t45 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t40, t43);
    t30 = (t9 + 36U);
    t31 = *((char **)t30);
    t56 = *((unsigned char *)t31);
    t57 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t45, t56);
    t30 = (t32 + 36U);
    t33 = *((char **)t30);
    t30 = (t19 + 0U);
    t64 = *((int *)t30);
    t34 = (t19 + 8U);
    t79 = *((int *)t34);
    t80 = (t17 - t64);
    t67 = (t80 * t79);
    t36 = (t19 + 4U);
    t81 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t64, t81, t79, t17);
    t72 = (1U * t67);
    t78 = (0 + t72);
    t37 = (t33 + t78);
    *((unsigned char *)t37) = t57;
    t10 = (t4 + 0U);
    t16 = *((int *)t10);
    t11 = (t4 + 8U);
    t24 = *((int *)t11);
    t47 = (t17 - t16);
    t18 = (t47 * t24);
    t13 = (t4 + 4U);
    t49 = *((int *)t13);
    xsi_vhdl_check_range_of_index(t16, t49, t24, t17);
    t25 = (1U * t18);
    t53 = (0 + t25);
    t14 = (t3 + t53);
    t40 = *((unsigned char *)t14);
    t15 = (t23 + 36U);
    t20 = *((char **)t15);
    t15 = (t19 + 0U);
    t51 = *((int *)t15);
    t22 = (t19 + 8U);
    t52 = *((int *)t22);
    t59 = (t17 - t51);
    t54 = (t59 * t52);
    t26 = (t19 + 4U);
    t61 = *((int *)t26);
    xsi_vhdl_check_range_of_index(t51, t61, t52, t17);
    t65 = (1U * t54);
    t66 = (0 + t65);
    t27 = (t20 + t66);
    t43 = *((unsigned char *)t27);
    t45 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t40, t43);
    t29 = (t4 + 0U);
    t63 = *((int *)t29);
    t30 = (t4 + 8U);
    t64 = *((int *)t30);
    t79 = (t17 - t63);
    t67 = (t79 * t64);
    t31 = (t4 + 4U);
    t80 = *((int *)t31);
    xsi_vhdl_check_range_of_index(t63, t80, t64, t17);
    t72 = (1U * t67);
    t78 = (0 + t72);
    t33 = (t3 + t78);
    t56 = *((unsigned char *)t33);
    t34 = (t9 + 36U);
    t36 = *((char **)t34);
    t57 = *((unsigned char *)t36);
    t69 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t56, t57);
    t70 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t45, t69);
    t34 = (t9 + 36U);
    t37 = *((char **)t34);
    t82 = *((unsigned char *)t37);
    t34 = (t23 + 36U);
    t38 = *((char **)t34);
    t34 = (t19 + 0U);
    t81 = *((int *)t34);
    t46 = (t19 + 8U);
    t83 = *((int *)t46);
    t84 = (t17 - t81);
    t85 = (t84 * t83);
    t48 = (t19 + 4U);
    t86 = *((int *)t48);
    xsi_vhdl_check_range_of_index(t81, t86, t83, t17);
    t87 = (1U * t85);
    t88 = (0 + t87);
    t50 = (t38 + t88);
    t89 = *((unsigned char *)t50);
    t90 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t82, t89);
    t91 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t70, t90);
    t55 = (t9 + 36U);
    t58 = *((char **)t55);
    t55 = (t58 + 0);
    *((unsigned char *)t55) = t91;

LAB15:    if (t17 == t21)
        goto LAB16;

LAB17:    t16 = (t17 + 1);
    t17 = t16;
    goto LAB13;

LAB18:;
}

static void unisim_a_3428608661_4084842795_p_0(char *t0)
{
    char t16[16];
    char t21[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t17;
    int t18;
    int t19;
    int t20;
    int t22;
    char *t23;
    int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 4128U);
    t4 = ieee_p_2592010699_sub_1600845279_503743352(IEEE_P_2592010699, t3, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t5 = (t0 + 4144U);
    t7 = ieee_p_2592010699_sub_1600845279_503743352(IEEE_P_2592010699, t6, t5);
    t1 = t7;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t12 = (17 - 17);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 1424U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t3, 18U);

LAB9:    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t12 = (17 - 17);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 1492U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    memcpy(t2, t3, 18U);

LAB12:    t2 = (t0 + 1424U);
    t3 = *((char **)t2);
    t2 = (t0 + 4176U);
    t12 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t3, t2);
    t5 = (t0 + 1152U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    *((int *)t5) = t12;
    t2 = (t0 + 1492U);
    t3 = *((char **)t2);
    t13 = (17 - 17);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 17;
    t6 = (t5 + 4U);
    *((int *)t6) = 9;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (9 - 17);
    t17 = (t12 * -1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t18 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t16);
    t6 = (t0 + 1220U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    *((int *)t6) = t18;
    t2 = (t0 + 1492U);
    t3 = *((char **)t2);
    t13 = (17 - 8);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 8;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 8);
    t17 = (t12 * -1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t18 = unisim_p_3222816464_sub_3182959421_279109243(UNISIM_P_3222816464, t2, t16);
    t6 = (t0 + 1288U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    *((int *)t6) = t18;
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t2 = (t0 + 1220U);
    t5 = *((char **)t2);
    t18 = *((int *)t5);
    t19 = (t12 * t18);
    t20 = (18U + 18U);
    t2 = unisim_a_3428608661_4084842795_sub_338347530_1929794647(t0, t16, t19, t20);
    t6 = (t0 + 1016U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    t9 = (t16 + 12U);
    t13 = *((unsigned int *)t9);
    t13 = (t13 * 1U);
    memcpy(t6, t2, t13);
    t2 = (t0 + 4409);
    *((int *)t2) = 0;
    t3 = (t0 + 4413);
    *((int *)t3) = 8;
    t12 = 0;
    t18 = 8;

LAB14:    if (t12 <= t18)
        goto LAB15;

LAB17:    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t12 = *((int *)t3);
    t2 = (t0 + 1288U);
    t5 = *((char **)t2);
    t18 = *((int *)t5);
    t19 = (t12 * t18);
    t20 = (18U + 18U);
    t2 = unisim_a_3428608661_4084842795_sub_338347530_1929794647(t0, t16, t19, t20);
    t6 = (t0 + 1084U);
    t8 = *((char **)t6);
    t6 = (t8 + 0);
    t9 = (t16 + 12U);
    t13 = *((unsigned int *)t9);
    t13 = (t13 * 1U);
    memcpy(t6, t2, t13);
    t2 = (t0 + 1016U);
    t3 = *((char **)t2);
    t2 = (t0 + 4160U);
    t5 = (t0 + 1084U);
    t6 = *((char **)t5);
    t5 = (t0 + 4160U);
    t8 = unisim_a_3428608661_4084842795_sub_2553455981_1929794647(t0, t16, t3, t2, t6, t5);
    t9 = (t0 + 948U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t16 + 12U);
    t13 = *((unsigned int *)t11);
    t13 = (t13 * 1U);
    memcpy(t9, t8, t13);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t12 = (17 - 17);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t3 + t15);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t18 = (17 - 17);
    t17 = (t18 * -1);
    t26 = (1U * t17);
    t27 = (0 + t26);
    t5 = (t6 + t27);
    t4 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t1, t4);
    t8 = (t0 + 1356U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((unsigned char *)t8) = t7;
    t2 = (t0 + 1356U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB3:    t2 = (t0 + 948U);
    t3 = *((char **)t2);
    t2 = (t0 + 2288);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t8 = (t6 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 36U);
    xsi_driver_first_trans_fast_port(t2);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t8 = xsi_get_transient_memory(36U);
    memset(t8, 0, 36U);
    t9 = t8;
    memset(t9, (unsigned char)1, 36U);
    t10 = (t0 + 948U);
    t11 = *((char **)t10);
    t10 = (t11 + 0);
    memcpy(t10, t8, 36U);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t5 = (t0 + 684U);
    t6 = *((char **)t5);
    t5 = (t0 + 4128U);
    t8 = unisim_a_3428608661_4084842795_sub_4109895630_1929794647(t0, t16, t6, t5);
    t9 = (t0 + 1424U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t16 + 12U);
    t17 = *((unsigned int *)t11);
    t17 = (t17 * 1U);
    memcpy(t9, t8, t17);
    goto LAB9;

LAB11:    t5 = (t0 + 776U);
    t6 = *((char **)t5);
    t5 = (t0 + 4144U);
    t8 = unisim_a_3428608661_4084842795_sub_4109895630_1929794647(t0, t16, t6, t5);
    t9 = (t0 + 1492U);
    t10 = *((char **)t9);
    t9 = (t10 + 0);
    t11 = (t16 + 12U);
    t17 = *((unsigned int *)t11);
    t17 = (t17 * 1U);
    memcpy(t9, t8, t17);
    goto LAB12;

LAB15:    t5 = (t0 + 1016U);
    t6 = *((char **)t5);
    t19 = (18U + 18U);
    t20 = (t19 - 2);
    t13 = (35 - t20);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t5 = (t6 + t15);
    t9 = ((IEEE_P_2592010699) + 2332);
    t10 = (t21 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 34;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t22 = (0 - 34);
    t17 = (t22 * -1);
    t17 = (t17 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t17;
    t8 = xsi_base_array_concat(t8, t16, t9, (char)97, t5, t21, (char)99, (unsigned char)2, (char)101);
    t11 = (t0 + 1016U);
    t23 = *((char **)t11);
    t24 = (18U + 18U);
    t25 = (t24 - 1);
    t17 = (35 - t25);
    t26 = (t17 * 1U);
    t27 = (0 + t26);
    t11 = (t23 + t27);
    t28 = (35U + 1U);
    memcpy(t11, t8, t28);

LAB16:    t2 = (t0 + 4409);
    t12 = *((int *)t2);
    t3 = (t0 + 4413);
    t18 = *((int *)t3);
    if (t12 == t18)
        goto LAB17;

LAB18:    t19 = (t12 + 1);
    t12 = t19;
    t5 = (t0 + 4409);
    *((int *)t5) = t12;
    goto LAB14;

LAB19:    t2 = (t0 + 948U);
    t5 = *((char **)t2);
    t2 = (t0 + 4160U);
    t6 = unisim_a_3428608661_4084842795_sub_4109895630_1929794647(t0, t16, t5, t2);
    t8 = (t0 + 948U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t10 = (t16 + 12U);
    t13 = *((unsigned int *)t10);
    t13 = (t13 * 1U);
    memcpy(t8, t6, t13);
    goto LAB20;

}


extern void unisim_a_3428608661_4084842795_init()
{
	static char *pe[] = {(void *)unisim_a_3428608661_4084842795_p_0};
	static char *se[] = {(void *)unisim_a_3428608661_4084842795_sub_338347530_1929794647,(void *)unisim_a_3428608661_4084842795_sub_4109895630_1929794647,(void *)unisim_a_3428608661_4084842795_sub_2553455981_1929794647};
	xsi_register_didat("unisim_a_3428608661_4084842795", "isim/core_tb_isim_beh.exe.sim/unisim/a_3428608661_4084842795.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
