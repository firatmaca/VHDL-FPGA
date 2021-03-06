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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/v1/Desktop/lab7/binary_bcd.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_2494713764_2730021763_p_0(char *t0)
{
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
    int t11;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t5 = t1;
    memset(t5, (unsigned char)2, 6U);
    t6 = (t0 + 7488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(27, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t5 = (t0 + 7552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 20U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 7616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(29, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t5 = (t0 + 7680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 20U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 7744);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t2 = (t0 + 7488);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 20U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 20U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t1 = (t0 + 7744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_2494713764_2730021763_p_1(char *t0)
{
    char t13[16];
    char t14[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7808);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7872);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 20U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 7936);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t1 = (t0 + 8000);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 7280);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 7808);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7936);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 6U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t4 = (t0 + 7872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t1, 20U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 8000);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((int *)t6) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t3 = (t8 == 6);
    if (t3 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t8 = (6 - 2);
    t10 = (5 - t8);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t14 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 4;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t15 = (0 - 4);
    t16 = (t15 * -1);
    t16 = (t16 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t16;
    t4 = xsi_base_array_concat(t4, t13, t5, (char)97, t1, t14, (char)99, (unsigned char)6, (char)101);
    t16 = (5U + 1U);
    t3 = (6U != t16);
    if (t3 == 1)
        goto LAB9;

LAB10:    t7 = (t0 + 7936);
    t9 = (t7 + 56U);
    t17 = *((char **)t9);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 6U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t10 = (19 - 18);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t8 = (6 - 1);
    t15 = (t8 - 5);
    t16 = (t15 * -1);
    t20 = (1U * t16);
    t21 = (0 + t20);
    t4 = (t5 + t21);
    t3 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t9 = (t14 + 0U);
    t17 = (t9 + 0U);
    *((int *)t17) = 18;
    t17 = (t9 + 4U);
    *((int *)t17) = 0;
    t17 = (t9 + 8U);
    *((int *)t17) = -1;
    t22 = (0 - 18);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t17 = (t9 + 12U);
    *((unsigned int *)t17) = t23;
    t6 = xsi_base_array_concat(t6, t13, t7, (char)97, t1, t14, (char)99, t3, (char)101);
    t23 = (19U + 1U);
    t24 = (20U != t23);
    if (t24 == 1)
        goto LAB11;

LAB12:    t17 = (t0 + 7872);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t25 = (t19 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t6, 20U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t8 = *((int *)t2);
    t15 = (t8 + 1);
    t1 = (t0 + 8000);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = t15;
    xsi_driver_first_trans_fast(t1);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 7808);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 7808);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB9:    xsi_size_not_matching(6U, t16, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(20U, t23, 0);
    goto LAB12;

}

static void work_a_2494713764_2730021763_p_2(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (19 - 19);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 19;
    t8 = (t7 + 4U);
    *((int *)t8) = 16;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (16 - 19);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (19 - 19);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 8064);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 0U, 4U, 0LL);

LAB2:    t39 = (t0 + 7296);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t10 = (19 - 19);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 19;
    t18 = (t17 + 4U);
    *((int *)t18) = 16;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (16 - 19);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 8064);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 0U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_3(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (19 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 15;
    t8 = (t7 + 4U);
    *((int *)t8) = 12;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (12 - 15);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (19 - 15);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 8128);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 4U, 4U, 0LL);

LAB2:    t39 = (t0 + 7312);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t10 = (19 - 15);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 15;
    t18 = (t17 + 4U);
    *((int *)t18) = 12;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (12 - 15);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 8128);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 4U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_4(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (19 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 11;
    t8 = (t7 + 4U);
    *((int *)t8) = 8;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (8 - 11);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (19 - 11);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 8192);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 8U, 4U, 0LL);

LAB2:    t39 = (t0 + 7328);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t10 = (19 - 11);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 11;
    t18 = (t17 + 4U);
    *((int *)t18) = 8;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (8 - 11);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 8192);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 8U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_5(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (19 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 4;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (4 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (19 - 7);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 8256);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 12U, 4U, 0LL);

LAB2:    t39 = (t0 + 7344);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t10 = (19 - 7);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 7;
    t18 = (t17 + 4U);
    *((int *)t18) = 4;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (4 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 8256);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 12U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_6(char *t0)
{
    char t6[16];
    char t12[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (19 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t6, 4);
    if (t11 != 0)
        goto LAB3;

LAB4:
LAB7:    t29 = (t0 + 2472U);
    t30 = *((char **)t29);
    t31 = (19 - 3);
    t32 = (t31 * 1U);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t34 = (t0 + 8320);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t29, 4U);
    xsi_driver_first_trans_delta(t34, 16U, 4U, 0LL);

LAB2:    t39 = (t0 + 7360);
    *((int *)t39) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 2472U);
    t13 = *((char **)t8);
    t10 = (19 - 3);
    t14 = (t10 * 1U);
    t15 = (0 + t14);
    t8 = (t13 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 3;
    t18 = (t17 + 4U);
    *((int *)t18) = 0;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (0 - 3);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t18 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t12, t8, t16, 3);
    t21 = (t12 + 12U);
    t20 = *((unsigned int *)t21);
    t22 = (1U * t20);
    t23 = (4U != t22);
    if (t23 == 1)
        goto LAB5;

LAB6:    t24 = (t0 + 8320);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 4U);
    xsi_driver_first_trans_delta(t24, 16U, 4U, 0LL);
    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t22, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_7(char *t0)
{
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2952U);
    t11 = *((char **)t10);
    t10 = (t0 + 8384);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 20U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t16 = (t0 + 7376);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 8384);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 20U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(79, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = (19 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 8448);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 7392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2494713764_2730021763_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = (19 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 8512);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 7408);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2494713764_2730021763_init()
{
	static char *pe[] = {(void *)work_a_2494713764_2730021763_p_0,(void *)work_a_2494713764_2730021763_p_1,(void *)work_a_2494713764_2730021763_p_2,(void *)work_a_2494713764_2730021763_p_3,(void *)work_a_2494713764_2730021763_p_4,(void *)work_a_2494713764_2730021763_p_5,(void *)work_a_2494713764_2730021763_p_6,(void *)work_a_2494713764_2730021763_p_7,(void *)work_a_2494713764_2730021763_p_8,(void *)work_a_2494713764_2730021763_p_9};
	xsi_register_didat("work_a_2494713764_2730021763", "isim/workk_isim_beh.exe.sim/work/a_2494713764_2730021763.didat");
	xsi_register_executes(pe);
}
