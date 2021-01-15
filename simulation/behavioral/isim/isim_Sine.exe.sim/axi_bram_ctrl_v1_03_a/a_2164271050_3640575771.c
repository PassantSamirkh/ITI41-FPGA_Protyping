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
static const char *ng0 = "E:/Xilinx/ISE/14.7/ISE_DS/EDK/hw/XilinxProcessorIPLib/pcores/axi_bram_ctrl_v1_03_a/hdl/vhdl/axi_bram_ctrl.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_0(char *t0)
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

LAB0:    xsi_set_current_line(497, ng0);

LAB3:    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 24568);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 24248);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(498, ng0);

LAB3:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24264);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(499, ng0);

LAB3:    t1 = (t0 + 13128U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 24696);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24280);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(500, ng0);

LAB3:    t1 = (t0 + 13288U);
    t2 = *((char **)t1);
    t3 = (32 / 8);
    t4 = (t3 - 1);
    t5 = (3 - t4);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = (t0 + 24760);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_delta(t8, 0U, 4U, 0LL);

LAB2:    t13 = (t0 + 24296);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(501, ng0);

LAB3:    t1 = (t0 + 13448U);
    t2 = *((char **)t1);
    t1 = (t0 + 24824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 24312);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(502, ng0);

LAB3:    t1 = (t0 + 11848U);
    t2 = *((char **)t1);
    t1 = (t0 + 17744U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (32 + t4);
    t6 = (t5 - 1);
    t7 = (31 - t6);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = (t0 + 24888);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_delta(t10, 0U, 32U, 0LL);

LAB2:    t15 = (t0 + 24328);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_6(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(504, ng0);

LAB3:    t1 = (t0 + 13608U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (31 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 24952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_delta(t7, 0U, 32U, 0LL);

LAB2:    t12 = (t0 + 24344);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_7(char *t0)
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

LAB0:    xsi_set_current_line(533, ng0);

LAB3:    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 25016);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 24360);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(534, ng0);

LAB3:    t1 = (t0 + 14248U);
    t2 = *((char **)t1);
    t3 = (32 / 8);
    t4 = (t3 - 1);
    t5 = (3 - t4);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = (t0 + 25080);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_delta(t8, 0U, 4U, 0LL);

LAB2:    t13 = (t0 + 24376);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(535, ng0);

LAB3:    t1 = (t0 + 13928U);
    t2 = *((char **)t1);
    t1 = (t0 + 25144);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 24392);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(536, ng0);

LAB3:    t1 = (t0 + 14088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25208);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24408);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(537, ng0);

LAB3:    t1 = (t0 + 12968U);
    t2 = *((char **)t1);
    t1 = (t0 + 17744U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (32 + t4);
    t6 = (t5 - 1);
    t7 = (31 - t6);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = (t0 + 25272);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_delta(t10, 0U, 32U, 0LL);

LAB2:    t15 = (t0 + 24424);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_12(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(538, ng0);

LAB3:    t1 = (t0 + 14408U);
    t2 = *((char **)t1);
    t3 = (32 - 1);
    t4 = (31 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 25336);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_delta(t7, 0U, 32U, 0LL);

LAB2:    t12 = (t0 + 24440);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(593, ng0);

LAB3:    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25400);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_14(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(659, ng0);

LAB3:    t2 = (t0 + 17264U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 3);
    t5 = (t0 + 25464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_15(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(660, ng0);

LAB3:    t2 = (t0 + 17264U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 3);
    t5 = (t0 + 25528);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(670, ng0);

LAB3:    t1 = (t0 + 15048U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25592);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24472);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(671, ng0);

LAB3:    t1 = (t0 + 15208U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 25656);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 24488);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_init()
{
	static char *pe[] = {(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_0,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_1,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_2,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_3,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_4,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_5,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_6,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_7,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_8,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_9,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_10,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_11,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_12,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_13,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_14,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_15,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_16,(void *)axi_bram_ctrl_v1_03_a_a_2164271050_3640575771_p_17};
	xsi_register_didat("axi_bram_ctrl_v1_03_a_a_2164271050_3640575771", "isim/isim_Sine.exe.sim/axi_bram_ctrl_v1_03_a/a_2164271050_3640575771.didat");
	xsi_register_executes(pe);
}
