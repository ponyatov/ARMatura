all: blink.elf

OBJS = blink.o startup.o system.o

TARGET = arm-none-eabi
CPUFAM = STM32F4
CPUMODEL = $(CPUFAM)07VG
FLAGS = -mcpu=cortex-m4 -mthumb

CC = $(TARGET)-gcc
AS = $(TARGET)-as
LD = $(TARGET)-ld

LDFILE = $(LIBDIR)/$(CPUFAM)/ld/$(CPUMODEL).ld

LIBDIR = ../../lib

ASFLAGS = $(FLAGS)
COPTFLAGS = -pipe -O0
CFLAGS = $(FLAGS) $(COPTFLAGS) -I $(LIBDIR)/$(CPUFAM) -I ../../lib/$(CPUFAM)/inc -I $(LIBDIR)/CMSIS/inc

%.o: %.c  Makefile
	$(CC) $(CFLAGS) -o $@ -c $<
	
startup.o: $(LIBDIR)/$(CPUFAM)/gcc_startup_$(CPUFAM)xx.s Makefile
	$(AS) $(ASFLAGS) $< -o $@
	
system.o: $(LIBDIR)/$(CPUFAM)/system_$(CPUFAM)xx.c Makefile
	$(CC) $(CFLAGS) -o $@ -c $<
	
blink.elf: $(OBJS) $(LDFILE)
	$(TARGET)-ld -T$(LDFILE) $(OBJS) -o $@ 
