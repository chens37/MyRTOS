obj= vector_reset.o
obj+= startup.o
obj+= boot.o
obj+= abnormal.o
obj+= sdram.o
obj+= uart.o
obj+= irq.o
obj+= mmu.o
obj+= lib/libc.a

lds= leeos.lds


cflags = arm-elf-gcc-4.4.3
aslags = arm-elf-ld -T $(lds)
biny   = arm-elf-objcopy -O binary
dump   = arm-elf-objdump

CC     = arm-elf-gcc-4.4.3
LD     = arm-elf-ld
AR     = arm-elf-ar
INCLUDEDIR := $(shell pwd)/include
CFLAGS     := -Wall -Os -fno-builtin
CPPFLAGS   := -nostdinc -I$(INCLUDEDIR)

export  CC LD AR INCLUDEDIR CFLAGS CPPFLAGS


leeos.bin : leeos
	$(biny) leeos leeos.bin
	$(dump) -D leeos > leeos.dis
	cp leeos.bin ../2416.bin

leeos : $(obj)
	$(aslags) $(obj) -o leeos

.PHONY : lib/libc.a
lib/libc.a:
	cd lib;make;cd ..

%.o:%.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<
%.o:%.s
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

clean:
	make clean -C lib
	rm -f *.o *.dis leeos leeos.bin
