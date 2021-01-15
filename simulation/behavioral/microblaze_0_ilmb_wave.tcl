#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     microblaze_0_ilmb_wave.tcl (Thu Jan 14 06:46:46 2021)
#
#  Module   Sine_microblaze_0_ilmb_wrapper
#  Instance microblaze_0_ilmb
#  Because EDK did not create the testbench, the user
#  specifies the path to the device under test, $tbpath.
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}Sine" }

# wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_Clk -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}SYS_Rst -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_Rst -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_ABus -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_ReadStrobe -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_WriteStrobe -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_AddrStrobe -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_DBus -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}M_BE -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}Sl_DBus -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}Sl_Ready -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}Sl_Wait -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}Sl_UE -into $id
# wave add $tbpath${ps}microblaze_0_ilmb${ps}Sl_CE -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_ABus -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_ReadStrobe -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_WriteStrobe -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_AddrStrobe -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_ReadDBus -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_WriteDBus -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_Ready -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_Wait -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_UE -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_CE -into $id
  wave add $tbpath${ps}microblaze_0_ilmb${ps}LMB_BE -into $id

