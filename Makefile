SHELL = /bin/bash

default: compile

compile: 
	arduino-cli compile -p /dev/cu.usbmodem14101 -b arduino:samd:mkrwifi1010

upload:
	arduino-cli upload -p /dev/cu.usbmodem14101 -b arduino:samd:mkrwifi1010 -v

debug:
	stty -f /dev/cu.usbmodem14101 9600 raw -clocal -echo
	cat /dev/cu.usbmodem14101
