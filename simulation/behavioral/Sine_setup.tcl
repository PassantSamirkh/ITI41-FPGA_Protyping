#  Simulation Model Generator
#  Xilinx EDK 14.7 EDK_P.20131013
#  Copyright (c) 1995-2012 Xilinx, Inc.  All rights reserved.
#
#  File     Sine_setup.tcl (Thu Jan 14 06:46:46 2021)
#
#  ISE Simulator Setup Script File
#
#  The Simulation Setup script file defines macros and
#  commands to automate the setup of signal tracing for
#  for waveform viewing, as well as helper functions.
#
#  To use this script, run the ISE Simulator exectuable
#  with the '-tclbatch Sine_setup.tcl' option.
#  The script does not exit. Type 'h' at the simulator prompt
#  to print a list of commands.
#
#  Comment or uncomment commands in wave trace TCL files
#  to change the set of signals saved.
#
#  Because EDK did not create the testbench, the user
#  specifies the path to the device under test, $tbpath.
#
# =====================================================

# =====================================================
# Set up signal tracing
# =====================================================

# Edit _wave.tcl files to modify signal tracing

proc w {} {
  global  tbpath
  global  PathSeparator
  puts  "Setting up signal tracing ..."
  source Sine_wave.tcl
}
proc w_top {} {
  global  tbpath
  global  PathSeparator
  puts  "Setting up signal tracing ..."
  set id [group add "Top level ports"]
  source top_level_ports_wave.tcl
}
proc w_instance {{design_instance_name }} {
  global  tbpath
  global  PathSeparator
  puts  "Setting up signal tracing ..."
  wave add $design_instance_name
}
# =====================================================
# Set up clock waveforms
# =====================================================

proc ClockSetup {} {
  global  tbpath
  global  PathSeparator
  puts -nonewline "Setting up clock ... "
  if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
  if { ![info exists tbpath] } { set tbpath "${ps}Sine" }
  isim force add $tbpath${ps}CLK_P 0 -time 0 ns -value 1 -time 2 ns -repeat 5 ns
  isim force add $tbpath${ps}CLK_N 1 -time 0 ns -value 0 -time 2 ns -repeat 5 ns
  puts "done"
}
# =====================================================
# Set up reset waveforms
# =====================================================

proc ResetSetup {} {
  global  tbpath
  global  PathSeparator
  puts -nonewline "Setting up reset and simulating ... "
  if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
  if { ![info exists tbpath] } { set tbpath "${ps}Sine" }
  isim force add $tbpath${ps}RESET 1 -time 0 ns -value 0 -time 80 ns
  puts "done"
}
proc reset {} { restart; ClockSetup; ResetSetup; }

# =====================================================
# Set up help menu
# =====================================================

proc PrintHelpInformation {} {
  puts "**********************************************************************"
  puts "**********************************************************************"
  puts "***"
  puts "***   Simulation Setup Macros (Sine_setup.tcl)"
  puts "***"
  puts "***   reset =>  Generate clock, toggle reset ports and reset simulation to time 0"
  puts "***"
  puts "***   w   =>  set up signal tracing for the ISE Simulator waveform"
  puts "***           viewer (edit signal lists in Sine_wave.tcl)"
  puts "***"
  puts "***   w_top =>  Observe top level signals in the ISim Waveform Viewer"
  puts "***"
  puts "***   w_instance <<instance name>>  =>  Observe signals of the given instance in the ISim waveform viewer"
  puts "***           (Example: w /system/dlm_cntrl to observe signals of dlmb controller)."
  puts "***"
  puts "***   h   =>  print this help menu"
  puts "***"
  puts "***   Default flow is: w_top; run 1000ns or w; run 1000ns"
  puts "***"
  puts "**********************************************************************"
  puts "**********************************************************************"
}
proc h {} { PrintHelpInformation }

puts  "Setting up simulation commands ..."

PrintHelpInformation
