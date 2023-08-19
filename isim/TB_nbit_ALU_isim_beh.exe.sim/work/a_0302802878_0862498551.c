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
static const char *ng0 = "F:/OUSL/2023/Processor Design/LAB 1_New/ALM_Design_416115457/nbit_ALU.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_436351764_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0302802878_0862498551_p_0(char *t0)
{
    char t32[16];
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
    int t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1632U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3752);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 6307);
    t6 = (t0 + 3832);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 6315);
    t11 = xsi_mem_cmp(t2, t5, 4U);
    if (t11 == 1)
        goto LAB8;

LAB18:    t7 = (t0 + 6319);
    t12 = xsi_mem_cmp(t7, t5, 4U);
    if (t12 == 1)
        goto LAB9;

LAB19:    t9 = (t0 + 6323);
    t13 = xsi_mem_cmp(t9, t5, 4U);
    if (t13 == 1)
        goto LAB10;

LAB20:    t14 = (t0 + 6327);
    t16 = xsi_mem_cmp(t14, t5, 4U);
    if (t16 == 1)
        goto LAB11;

LAB21:    t17 = (t0 + 6331);
    t19 = xsi_mem_cmp(t17, t5, 4U);
    if (t19 == 1)
        goto LAB12;

LAB22:    t20 = (t0 + 6335);
    t22 = xsi_mem_cmp(t20, t5, 4U);
    if (t22 == 1)
        goto LAB13;

LAB23:    t23 = (t0 + 6339);
    t25 = xsi_mem_cmp(t23, t5, 4U);
    if (t25 == 1)
        goto LAB14;

LAB24:    t26 = (t0 + 6343);
    t28 = xsi_mem_cmp(t26, t5, 4U);
    if (t28 == 1)
        goto LAB15;

LAB25:    t29 = (t0 + 6347);
    t31 = xsi_mem_cmp(t29, t5, 4U);
    if (t31 == 1)
        goto LAB16;

LAB26:
LAB17:    xsi_set_current_line(99, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)1, 8U);
    t5 = (t0 + 3896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(101, ng0);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(59, ng0);
    t33 = (t0 + 1032U);
    t34 = *((char **)t33);
    t33 = (t0 + 6184U);
    t35 = (t0 + 1192U);
    t36 = *((char **)t35);
    t35 = (t0 + 6200U);
    t37 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t32, t34, t33, t36, t35);
    t38 = (t32 + 12U);
    t39 = *((unsigned int *)t38);
    t40 = (1U * t39);
    t4 = (8U != t40);
    if (t4 == 1)
        goto LAB28;

LAB29:    t41 = (t0 + 3896);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memcpy(t45, t37, 8U);
    xsi_driver_first_trans_fast_port(t41);
    goto LAB7;

LAB9:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6200U);
    t7 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t32, t2, t1, t6, t5);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB30;

LAB31:    t9 = (t0 + 3896);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB7;

LAB10:    goto LAB7;

LAB11:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6200U);
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 6359);
    t5 = (t0 + 3896);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB33:    goto LAB7;

LAB12:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6200U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t32, t2, t1, t6, t5);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB35;

LAB36:    t9 = (t0 + 3896);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB7;

LAB13:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 6200U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t32, t2, t1, t6, t5);
    t8 = (t32 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB37;

LAB38:    t9 = (t0 + 3896);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB7;

LAB14:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t32, t2, t1);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB39;

LAB40:    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB7;

LAB15:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t32, t2, t1, 1);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB41;

LAB42:    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB7;

LAB16:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6184U);
    t5 = ieee_p_3620187407_sub_436351764_3965413181(IEEE_P_3620187407, t32, t2, t1, 1);
    t6 = (t32 + 12U);
    t39 = *((unsigned int *)t6);
    t40 = (1U * t39);
    t3 = (8U != t40);
    if (t3 == 1)
        goto LAB43;

LAB44:    t7 = (t0 + 3896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB7;

LAB27:;
LAB28:    xsi_size_not_matching(8U, t40, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(8U, t40, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 6351);
    t9 = (t0 + 3896);
    t10 = (t9 + 56U);
    t14 = *((char **)t10);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB33;

LAB35:    xsi_size_not_matching(8U, t40, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(8U, t40, 0);
    goto LAB38;

LAB39:    xsi_size_not_matching(8U, t40, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(8U, t40, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t40, 0);
    goto LAB44;

}


extern void work_a_0302802878_0862498551_init()
{
	static char *pe[] = {(void *)work_a_0302802878_0862498551_p_0};
	xsi_register_didat("work_a_0302802878_0862498551", "isim/TB_nbit_ALU_isim_beh.exe.sim/work/a_0302802878_0862498551.didat");
	xsi_register_executes(pe);
}
