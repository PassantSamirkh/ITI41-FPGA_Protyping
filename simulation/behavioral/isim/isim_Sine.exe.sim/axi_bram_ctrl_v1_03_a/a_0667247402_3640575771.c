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
static const char *ng0 = "E:/Xilinx/ISE/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_bram_ctrl_v1_03_a/hdl/vhdl/wrap_brst.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8288);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(304, ng0);
    t4 = (t0 + 1456U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 4192U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(310, ng0);
    t2 = (t0 + 3216U);
    t4 = *((char **)t2);
    t2 = (t0 + 8432);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 30U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(305, ng0);
    t4 = xsi_get_transient_memory(30U);
    memset(t4, 0, 30U);
    t13 = t4;
    memset(t13, (unsigned char)2, 30U);
    t14 = (t0 + 8432);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 30U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB11:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t2 = (t0 + 8432);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 30U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
    int t25;
    char *t26;
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(390, ng0);
    t1 = (t0 + 1776U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4552U);
    t7 = *((char **)t6);
    t8 = xsi_mem_cmp(t7, t1, 3U);
    if (t8 == 1)
        goto LAB3;

LAB7:    t6 = (t0 + 4432U);
    t9 = *((char **)t6);
    t10 = xsi_mem_cmp(t9, t1, 3U);
    if (t10 == 1)
        goto LAB4;

LAB8:    t6 = (t0 + 4312U);
    t11 = *((char **)t6);
    t12 = xsi_mem_cmp(t11, t1, 3U);
    if (t12 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(422, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t6 = (t0 + 8496);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t1 = (t0 + 8304);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(395, ng0);
    t6 = (t0 + 1616U);
    t13 = *((char **)t6);
    t14 = (7 - 3);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t6 = (t13 + t16);
    t17 = (t0 + 15925);
    t19 = xsi_mem_cmp(t17, t6, 4U);
    if (t19 == 1)
        goto LAB12;

LAB17:    t20 = (t0 + 15929);
    t22 = xsi_mem_cmp(t20, t6, 4U);
    if (t22 == 1)
        goto LAB13;

LAB18:    t23 = (t0 + 15933);
    t25 = xsi_mem_cmp(t23, t6, 4U);
    if (t25 == 1)
        goto LAB14;

LAB19:    t26 = (t0 + 15937);
    t28 = xsi_mem_cmp(t26, t6, 4U);
    if (t28 == 1)
        goto LAB15;

LAB20:
LAB16:    xsi_set_current_line(400, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t6 = (t0 + 8496);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB11:    goto LAB2;

LAB4:    xsi_set_current_line(406, ng0);
    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    t3 = (7 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 15941);
    t8 = xsi_mem_cmp(t6, t1, 4U);
    if (t8 == 1)
        goto LAB23;

LAB27:    t9 = (t0 + 15945);
    t10 = xsi_mem_cmp(t9, t1, 4U);
    if (t10 == 1)
        goto LAB24;

LAB28:    t13 = (t0 + 15949);
    t12 = xsi_mem_cmp(t13, t1, 4U);
    if (t12 == 1)
        goto LAB25;

LAB29:
LAB26:    xsi_set_current_line(410, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t6 = (t0 + 8496);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB22:    goto LAB2;

LAB5:    xsi_set_current_line(416, ng0);
    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    t3 = (7 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 15953);
    t8 = xsi_mem_cmp(t6, t1, 4U);
    if (t8 == 1)
        goto LAB32;

LAB35:    t9 = (t0 + 15957);
    t10 = xsi_mem_cmp(t9, t1, 4U);
    if (t10 == 1)
        goto LAB33;

LAB36:
LAB34:    xsi_set_current_line(419, ng0);
    t1 = xsi_get_transient_memory(3U);
    memset(t1, 0, 3U);
    t2 = t1;
    memset(t2, (unsigned char)2, 3U);
    t6 = (t0 + 8496);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t1, 3U);
    xsi_driver_first_trans_fast(t6);

LAB31:    goto LAB2;

LAB10:;
LAB12:    xsi_set_current_line(396, ng0);
    t29 = (t0 + 5632U);
    t30 = *((char **)t29);
    t29 = (t0 + 8496);
    t31 = (t29 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t30, 3U);
    xsi_driver_first_trans_fast(t29);
    goto LAB11;

LAB13:    xsi_set_current_line(397, ng0);
    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB14:    xsi_set_current_line(398, ng0);
    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB15:    xsi_set_current_line(399, ng0);
    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB21:;
LAB23:    xsi_set_current_line(407, ng0);
    t18 = (t0 + 5632U);
    t20 = *((char **)t18);
    t18 = (t0 + 8496);
    t21 = (t18 + 56U);
    t23 = *((char **)t21);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    memcpy(t26, t20, 3U);
    xsi_driver_first_trans_fast(t18);
    goto LAB22;

LAB24:    xsi_set_current_line(408, ng0);
    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB25:    xsi_set_current_line(409, ng0);
    t1 = (t0 + 5872U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB30:;
LAB32:    xsi_set_current_line(417, ng0);
    t13 = (t0 + 5632U);
    t17 = *((char **)t13);
    t13 = (t0 + 8496);
    t18 = (t13 + 56U);
    t20 = *((char **)t18);
    t21 = (t20 + 56U);
    t23 = *((char **)t21);
    memcpy(t23, t17, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB31;

LAB33:    xsi_set_current_line(418, ng0);
    t1 = (t0 + 5752U);
    t2 = *((char **)t1);
    t1 = (t0 + 8496);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t2, 3U);
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB37:;
}

static void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(1034, ng0);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 8320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(1035, ng0);
    t4 = (t0 + 1456U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 4192U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    if (t12 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(1041, ng0);
    t2 = (t0 + 3536U);
    t4 = *((char **)t2);
    t2 = (t0 + 8560);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t13 = *((char **)t10);
    memcpy(t13, t4, 3U);
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(1036, ng0);
    t4 = xsi_get_transient_memory(3U);
    memset(t4, 0, 3U);
    t13 = t4;
    memset(t13, (unsigned char)2, 3U);
    t14 = (t0 + 8560);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t4, 3U);
    xsi_driver_first_trans_fast(t14);
    goto LAB9;

LAB11:    xsi_set_current_line(1039, ng0);
    t2 = (t0 + 3376U);
    t5 = *((char **)t2);
    t2 = (t0 + 8560);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 3U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(1062, ng0);
    t1 = (t0 + 3536U);
    t2 = *((char **)t1);
    t1 = (t0 + 5632U);
    t3 = *((char **)t1);
    t4 = xsi_mem_cmp(t3, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t1 = (t0 + 5752U);
    t5 = *((char **)t1);
    t6 = xsi_mem_cmp(t5, t2, 3U);
    if (t6 == 1)
        goto LAB4;

LAB9:    t1 = (t0 + 5872U);
    t7 = *((char **)t1);
    t8 = xsi_mem_cmp(t7, t2, 3U);
    if (t8 == 1)
        goto LAB5;

LAB10:    t1 = (t0 + 5992U);
    t9 = *((char **)t1);
    t10 = xsi_mem_cmp(t9, t2, 3U);
    if (t10 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(1122, ng0);
    t1 = (t0 + 8624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(1123, ng0);
    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t1 = (t0 + 8688);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 30U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 8336);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(1065, ng0);
    t1 = (t0 + 2576U);
    t11 = *((char **)t1);
    t12 = (2 - 31);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t11 + t15);
    t16 = *((unsigned char *)t1);
    t17 = (t16 == (unsigned char)3);
    if (t17 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(1068, ng0);
    t1 = (t0 + 8624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    xsi_set_current_line(1072, ng0);
    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t4 = (32 - 1);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 29U);
    xsi_driver_first_trans_delta(t3, 0U, 29U, 0LL);
    xsi_set_current_line(1076, ng0);
    t1 = (t0 + 8688);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 29U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(1079, ng0);
    t1 = (t0 + 2576U);
    t2 = *((char **)t1);
    t4 = (2 + 1);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 15961);
    t16 = 1;
    if (2U == 2U)
        goto LAB19;

LAB20:    t16 = 0;

LAB21:    if (t16 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(1082, ng0);
    t1 = (t0 + 8624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(1086, ng0);
    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t4 = (32 - 1);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 28U);
    xsi_driver_first_trans_delta(t3, 0U, 28U, 0LL);
    xsi_set_current_line(1090, ng0);
    t1 = (t0 + 15963);
    t16 = (2U != 2U);
    if (t16 == 1)
        goto LAB25;

LAB26:    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_delta(t3, 28U, 2U, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(1094, ng0);
    t1 = (t0 + 2576U);
    t2 = *((char **)t1);
    t4 = (2 + 2);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 15965);
    t16 = 1;
    if (3U == 3U)
        goto LAB30;

LAB31:    t16 = 0;

LAB32:    if (t16 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(1097, ng0);
    t1 = (t0 + 8624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB28:    xsi_set_current_line(1101, ng0);
    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t4 = (32 - 1);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 27U);
    xsi_driver_first_trans_delta(t3, 0U, 27U, 0LL);
    xsi_set_current_line(1105, ng0);
    t1 = (t0 + 15968);
    t16 = (3U != 3U);
    if (t16 == 1)
        goto LAB36;

LAB37:    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 3U);
    xsi_driver_first_trans_delta(t3, 27U, 3U, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(1108, ng0);
    t1 = (t0 + 2576U);
    t2 = *((char **)t1);
    t4 = (2 + 3);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 15971);
    t16 = 1;
    if (4U == 4U)
        goto LAB41;

LAB42:    t16 = 0;

LAB43:    if (t16 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(1111, ng0);
    t1 = (t0 + 8624);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB39:    xsi_set_current_line(1115, ng0);
    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    t4 = (32 - 1);
    t13 = (31 - t4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 26U);
    xsi_driver_first_trans_delta(t3, 0U, 26U, 0LL);
    xsi_set_current_line(1119, ng0);
    t1 = (t0 + 15975);
    t16 = (4U != 4U);
    if (t16 == 1)
        goto LAB47;

LAB48:    t3 = (t0 + 8688);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_delta(t3, 26U, 4U, 0LL);
    goto LAB2;

LAB12:;
LAB13:    xsi_set_current_line(1066, ng0);
    t18 = (t0 + 8624);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB14;

LAB16:    xsi_set_current_line(1080, ng0);
    t11 = (t0 + 8624);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB17;

LAB19:    t23 = 0;

LAB22:    if (t23 < 2U)
        goto LAB23;
    else
        goto LAB21;

LAB23:    t7 = (t1 + t23);
    t9 = (t3 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t9))
        goto LAB20;

LAB24:    t23 = (t23 + 1);
    goto LAB22;

LAB25:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(1095, ng0);
    t11 = (t0 + 8624);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB28;

LAB30:    t23 = 0;

LAB33:    if (t23 < 3U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t7 = (t1 + t23);
    t9 = (t3 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t9))
        goto LAB31;

LAB35:    t23 = (t23 + 1);
    goto LAB33;

LAB36:    xsi_size_not_matching(3U, 3U, 0);
    goto LAB37;

LAB38:    xsi_set_current_line(1109, ng0);
    t11 = (t0 + 8624);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t11);
    goto LAB39;

LAB41:    t23 = 0;

LAB44:    if (t23 < 4U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t7 = (t1 + t23);
    t9 = (t3 + t23);
    if (*((unsigned char *)t7) != *((unsigned char *)t9))
        goto LAB42;

LAB46:    t23 = (t23 + 1);
    goto LAB44;

LAB47:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB48;

}

static void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(1145, ng0);
    t1 = (t0 + 1936U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 3056U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t11 = (t0 + 2096U);
    t14 = *((char **)t11);
    t15 = *((unsigned char *)t14);
    t16 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t13, t15);
    t11 = (t0 + 8752);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t21 = (t0 + 8352);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 3056U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 8752);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_init()
{
	static char *pe[] = {(void *)axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_0,(void *)axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_1,(void *)axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_2,(void *)axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_3,(void *)axi_bram_ctrl_v1_03_a_a_0667247402_3640575771_p_4};
	xsi_register_didat("axi_bram_ctrl_v1_03_a_a_0667247402_3640575771", "isim/isim_Sine.exe.sim/axi_bram_ctrl_v1_03_a/a_0667247402_3640575771.didat");
	xsi_register_executes(pe);
}
