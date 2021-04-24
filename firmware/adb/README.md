# adb

This directory contains the firmware for the ADB (Apple Desktop Bus)
chip, which is actually an Apple-branded PIC16CR54 microcontroller.

# Functioning of the ADB

See Guide to the Macintosh Family Hardware, page 312.

* Automatically polls the last device that has sent data, the _active
  device_.  Then shifts it out to the VIA, that causes an interrupt.

* A non-active device asserts a _Service Request_ signal to the ADB
  when it has data to send.  The ADB asserts an interrupt request
  signal to the VIA, which sets bit 3 in data register 3 to 0.
  Respond to requests of the ADB Manager to poll each device to find
  which one asserted the Service Request.

Data bits are encoded as follows:

* Bit-cell time: 100 us

* 0: low 65 us

* 1: low 35 us
