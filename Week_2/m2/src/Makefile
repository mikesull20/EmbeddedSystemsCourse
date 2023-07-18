#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

FILE = c1m2
OBJS = $(SOURCES:.c=.o)

ifeq ($(PLATFORM),HOST)
	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld
	LINKER_FILE = ../msp432p401r.lds
	CPU = cortex-m4
	SPECS = nosys.specs
	CFLAGS = -Wall -Werror -g -O0 -std=c99 -mcpu=$(CPU) -mthumb -march=armv7e-m -mfloat-abi=hard -mfpu=fpv4-sp-d16 --specs=$(SPECS)
	LDFLAGS = -Wl,-Map=$(FILE).map -T $(LINKER_FILE)
	CPPFLAGs = -D$(PLATFORM)
else
	CC = gcc
	LD = ld
	CFLAGS = -Wall -Werror -g -O0 -std=c99
	CPPFLAGs = -DHOST
	LDFLAGS = -Wl,-Map=$(FILE).map

endif

%.i : %.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $< -o $@

%.asm : %.o
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $< -o $@

%.o : %.c
	$(CC) -c $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $<

$(FILE).out: $(OBJS)
	$(CC) $(OBJS) $(INCLUDES) $(CFLAGS) $(CPPFLAGs) $(LDFLAGS) -o $@

.PHONY: build
build: $(FILE).out

.PHONY: compile-all
compile-all: $(OBJS)

.PHONY: clean
clean:
	rm -rf *.o *.i *.asm $(FILE).out $(FILE).map
