obj= vector_reset.o
obj+= startup.o
obj+= boot.o
obj+= abnormal.o

lds= leeos.lds


cflags = arm-elf-gcc-4.4.3
aslags = arm-elf-ld -T $(lds)
biny   = arm-elf-objcopy -O binary
dump   = arm-elf-objdump

leeos.bin : leeos
	$(biny) leeos leeos.bin
	$(dump) -D leeos > leeos.dis
	cp leeos.bin ../2416.bin

leeos : $(obj)
	$(aslags) $(obj) -o leeos

boot.o : boot.c
	$(cflags) -c boot.c

startup.o : startup.s
	$(cflags) -c startup.s
vector_reset.o : vector_reset.s
	$(cflags) -c vector_reset.s
abnormal.o : abnormal.s
	$(cflags) -c abnormal.s

clean:
	rm -f *.o *.dis leeos leeos.bin
