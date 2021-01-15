#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     axi_bram_ctrl_0_wave.tcl (Thu Jan 14 06:46:46 2021)
#
#  Module   Sine_axi_bram_ctrl_0_wrapper
#  Instance axi_bram_ctrl_0
#  Because EDK did not create the testbench, the user
#  specifies the path to the device under test, $tbpath.
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}Sine" }

# wave add $tbpath${ps}axi_bram_ctrl_0${ps}ECC_Interrupt -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}ECC_UE -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWLEN -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWSIZE -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWBURST -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWLOCK -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWCACHE -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWPROT -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWVALID -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_AWREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_WLAST -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_WVALID -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_BID -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_BVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARLEN -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARSIZE -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARBURST -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARLOCK -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARCACHE -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARPROT -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARVALID -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RID -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RREADY -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_RLAST -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_AWVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_AWREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_AWADDR -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_WVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_WREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_WDATA -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_BRESP -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_BVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_BREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_ARVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_ARREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_ARADDR -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_RVALID -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_RREADY -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_RDATA -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}S_AXI_CTRL_RRESP -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Rst_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Clk_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_En_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_WE_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Addr_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_WrData_A -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_RdData_A -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Rst_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Clk_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_En_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_WE_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_Addr_B -into $id
  wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_WrData_B -into $id
# wave add $tbpath${ps}axi_bram_ctrl_0${ps}BRAM_RdData_B -into $id

