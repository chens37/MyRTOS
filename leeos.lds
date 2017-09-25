ENTRY(_start)
SECTIONS
{
    . = 0x30000000;
    .text : 
    {
        startup.o
        *(.text)
    }
    .data :
    {
        *(.data)
    }
    __bss_start__ = .;
    .bss :
    {
        *(.bss)
    }
    __bss_end__ = .;

}
