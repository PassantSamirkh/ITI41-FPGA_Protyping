#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     door_lock_0_wave.tcl (Thu Jan 14 06:46:46 2021)
#
#  Module   Sine_door_lock_0_wrapper
#  Instance door_lock_0
#  Because EDK did not create the testbench, the user
#  specifies the path to the device under test, $tbpath.
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}Sine" }

# wave add $tbpath${ps}door_lock_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_AWVALID -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_WVALID -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_ARVALID -into $id
# wave add $tbpath${ps}door_lock_0${ps}S_AXI_RREADY -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_RVALID -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_BVALID -into $id
  wave add $tbpath${ps}door_lock_0${ps}S_AXI_AWREADY -into $id

