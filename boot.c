//#include "stdio.h"
#include "S3C2451.h"


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

void (*p)(void) = s3c2440_init_clock;


void local_init_boot(init_func *init)
{
/**********************暂时无法使用，函数指针跑飞*/
    while(*init)
    {
        (*init++)(); 
    }
/************************/
   // s3c2440_init_clock();
   // s3c2440_init_io();
}

void delay(void)
{
    int i = 1000000;
    while(i--);

}

void plat_boot(void)
{
   local_init_boot(init);
//    boot_start();
    
    GPBSEL = 0;
    GPACON = 0;
    GPBCON = ( 0x5<<(2*5) );
    
    while(1)
    {
        UTXH0 = 'A';
        GPADAT = 0;
        GPBDAT = 0;
        delay();
        GPADAT = (0x3<<25);
        GPBDAT = (0x3<<5);
        delay();
    }
}

void arm920t_init_mmu(void)
{
//    printf("hello\n");
}
void s3c2440_init_clock(void)
{
    /*MPLL 534MHz*/
    MPLLCON |= (0x1<<0);
    MPLLCON |= (0x2<<5);
    MPLLCON |= (0x10b<<14);
    MPLLCON &= ~(0x1<<24);
    /*EPLL 96MHz*/
    EPLLCON |= (0x20 << 16);
    EPLLCON &= ~(0x1<<24);

    CLKDIV0 |= (0X1);
    CLKDIV0 |= (0X1<<2);
    CLKDIV0 |= (0X1<<3);
    CLKDIV0 |= (0X1<<4);
    /*usb 48MHz*/
    CLKDIV1 |= (0X1<<4);
    CLKSRC  |= (0X1<<6);
    CLKSRC  |= (0X1<<4);
    //LOCKCON0 = 0xffff;
}

void s3c2440_init_memory(void)
{
    BANKCON |= (0x1)
}
void s3c2440_init_irq(void)
{
}
void s3c2440_init_io(void)
{
    /*****UART******/
    ULCON0  = 0x03;  //8bit 1stop no parity
    UCON0   = 0xc05;
    UBRDIV0 = 52;    //115200Hz
    UDIVSLOT0 = 0X0080;

    GPHCON |= (0xa<<0);
    //GPHUDP 
    
}
















