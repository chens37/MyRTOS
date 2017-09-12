//#include <stdio.h>

#define UART ((volatile unsigned char *)(0x50000020))

#ifndef NULL
#define NULL 0
#endif

typedef void (*init_func)(void);

extern void arm920t_init_mmu(void);
extern void s3c2440_init_clock(void);
extern void s3c2440_init_memory(void);
extern void s3c2440_init_irq(void);
extern void s3c2440_init_io(void);

static init_func init[] = {
    arm920t_init_mmu,
    s3c2440_init_clock,
    s3c2440_init_memory,
    s3c2440_init_irq,
    s3c2440_init_io,
    NULL
};


void local_init_boot(init_func *init)
{
    while(*init)
    {
        (*init++)();
    }
}

void delay(void)
{
    int i = 100000;
    while(i--);

}

void plat_boot(void)
{
    
    //local_init_boot(init);
//    boot_start();
    volatile unsigned long *gpacon = (volatile unsigned long *)0x56000000;
    volatile unsigned long *gpbcon = (volatile unsigned long *)0x56000010;
    volatile unsigned long *gpadat = (volatile unsigned long *)0x56000004;
    volatile unsigned long *gpbdat = (volatile unsigned long *)0x56000014;
    volatile unsigned long *gpbsel = (volatile unsigned long *)0x5600001c;
    
    *gpbsel = 0;
    *gpacon = 0;
    *gpbcon = ( 0x5<<(2*5) );
    
    while(1)
    {
    *gpadat = 0;
    *gpbdat = 0;
    delay();
    *gpadat = (0x3<<25);
    *gpbdat = (0x3<<5);
    delay();
    }
}

void arm920t_init_mmu(void)
{
//    printf("hello\n");
}
void s3c2440_init_clock(void)
{
//    printf("world\n");
}

void s3c2440_init_memory(void)
{
}
void s3c2440_init_irq(void)
{
}
void s3c2440_init_io(void)
{
}
