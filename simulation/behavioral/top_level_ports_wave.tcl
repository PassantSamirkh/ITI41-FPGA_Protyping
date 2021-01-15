#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Thu Jan 14 06:46:46 2021)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}Sine" }

wave add $tbpath${ps}zio -into $id 
wave add $tbpath${ps}rzq -into $id 
wave add $tbpath${ps}mcbx_dram_we_n -into $id 
wave add $tbpath${ps}mcbx_dram_udqs_n -into $id 
wave add $tbpath${ps}mcbx_dram_udqs -into $id 
wave add $tbpath${ps}mcbx_dram_udm -into $id 
wave add $tbpath${ps}mcbx_dram_ras_n -into $id 
wave add $tbpath${ps}mcbx_dram_odt -into $id 
wave add $tbpath${ps}mcbx_dram_ldm -into $id 
wave add $tbpath${ps}mcbx_dram_dqs_n -into $id 
wave add $tbpath${ps}mcbx_dram_dqs -into $id 
wave add $tbpath${ps}mcbx_dram_dq -into $id 
wave add $tbpath${ps}mcbx_dram_ddr3_rst -into $id 
wave add $tbpath${ps}mcbx_dram_clk_n -into $id 
wave add $tbpath${ps}mcbx_dram_clk -into $id 
wave add $tbpath${ps}mcbx_dram_cke -into $id 
wave add $tbpath${ps}mcbx_dram_cas_n -into $id 
wave add $tbpath${ps}mcbx_dram_ba -into $id 
wave add $tbpath${ps}mcbx_dram_addr -into $id 
wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}CLK_P -into $id 
wave add $tbpath${ps}CLK_N -into $id 
wave add $tbpath${ps}axi_gpio_0_GPIO_IO_pin -into $id 

