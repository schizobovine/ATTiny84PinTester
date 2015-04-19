USER_LIB_PATH					:= $(realpath ./lib)
ARDUINO_LIBS					:= 
BOARD_TAG							:= attiny84
ARDUINO_PORT					:= /dev/ttyUSB0
CXXFLAGS							+= -std=gnu++11
CFLAGS								+= -std=gnu++11

ISP_PORT							:= /dev/ttyUSB0
ISP_PROG							:= stk500v1
ARDUINO_VAR_PATH			:= $(HOME)/sketchbook/hardware/attiny/variants
BOARDS_TXT						:= $(HOME)/sketchbook/hardware/attiny/boards.txt
AVRDUDE_ISP_BAUDRATE	:= 19200

include $(HOME)/git/Arduino-Makefile/Arduino.mk
