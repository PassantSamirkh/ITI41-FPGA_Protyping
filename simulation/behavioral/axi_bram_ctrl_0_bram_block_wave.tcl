#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     axi_bram_ctrl_0_bram_block_wave.tcl (Thu Jan 14 06:46:46 2021)
#
#  Module   Sine_axi_bram_ctrl_0_bram_block_wrapper
#  Instance axi_bram_ctrl_0_bram_block
#  Because EDK did not create the testbench, the user
#  specifies the path to the device under test, $tbpath.
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}Sine" }

# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Rst_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Clk_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_EN_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_WEN_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Addr_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Din_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Dout_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Rst_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Clk_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_EN_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_WEN_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Addr_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Din_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0_bram_block${ps}BRAM_Dout_B -into $id

