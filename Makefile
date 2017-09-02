obj= helloworld.o
obj+= start.o

lds= helloworld.lds


cflags = arm-elf-gcc
aslags = arm-elf-ld -T$(lds) -Ttext 0x00000000
biny   = arm-elf-objcopy -O binary

leeos.bin : leeos
	$(biny) leeos leeos.bin

leeos : $(obj)
	$(aslags) $(obj) -o leeos

helloworld.o : helloworld.c
	$(cflags) -c helloworld.c

start.o : start.s
	$(cflags) -c start.s

clean:
	rm -f *.o leeos leeos.bin
