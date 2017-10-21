#include "include/stdio.h"
#include "S3C2451.h"
#include "uart.h"

#define UFSTAT0         ( *((volatile unsigned long *)0x50000018) )
#define Startup_MDIV            400
#define Startup_PDIV            3
#define Startup_SDIV            1
#define Startup_MPLLSTOP        0

#define MPLL_VAL                ((Startup_MPLLSTOP<<24)|(Startup_MDIV<<14)|(Startup_PDIV<<5)|(Startup_SDIV))

#define Startup_ARMCLKdiv       1
#define Startup_PREdiv          0x2
#define Startup_HCLKdiv         0x1
#define Startup_PCLKdiv         1
#define CLK_DIV_VAL             ((Startup_ARMCLKdiv<<9)|(Startup_PREdiv<<4)|(Startup_PCLKdiv<<2)|(Startup_HCLKdiv))

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

void puchar(unsigned char c)
{
    while(UFSTAT0 & (1<<14));
    UTXH0 = c;

}

void plat_boot(void)
{
   local_init_boot(init);
//    boot_start();
   // uart_init();
    
    GPBSEL = 0;
    GPACON = 0;
    GPBCON = ( 0x5<<(2*5) );
  
    printf("hello world\n");
    while(1)
    {
//        printf("hello world\n\r");
        delay();
    }
}

void arm920t_init_mmu(void)
{
//    printf("hello\n");
}
void s3c2440_init_clock(void)
{
    /*MPLL 534MHz*
    MPLLCON |= (0x1<<0);
    MPLLCON &= ~(0x6<<5);
    MPLLCON |= (0x3<<5);
    MPLLCON &= ~(0x215<<14);
    MPLLCON |= (400<<14);
    MPLLCON &= ~(0x1<<24);*/

    //MPLLCON = ((0x3<<5)|(400<<14)|(0x1));

    /*EPLL 96MHz*/
    //EPLLCON |= (0x20 << 16);
    //EPLLCON &= ~(0x1<<24);

    /*选择MPLL为时钟源*/
    //CLKSRC  |= (0X1<<4);
    //LOCKCON0 = 0xffff;
    //CLKDIV0 = (CLKDIV0&~(0x1E37));
/*    CLKDIV0 |= (0X1);
    CLKDIV0 |= (0X1<<2);
    CLKDIV0 |= (0X2<<4);
    CLKDIV0 |= (0x1<<9);*/

    CLKDIV0 = (CLKDIV0&~(0x1E37)) | CLK_DIV_VAL;

    LOCKCON0 = 0xffff;
    MPLLCON = MPLL_VAL;
    CLKSRC  |= (1<<4);
}

void s3c2440_init_memory(void)
{
   // BANKCON |= (0x1)
}
void s3c2440_init_irq(void)
{
   GPFCON &= ~(0xff);
   GPFCON |= 0xaa;

   EXTINT0 &= ~(0XFFFF);
   EXTINT0 |= (0XFFFF);

   SRCPND = 0X0F;
   INTPND = 0X0F;
}
void s3c2440_init_io(void)
{
    GPHCON = (GPHCON & ~0XFFFF) | 0XAAAA;

    /*****UART******/
    ULCON0  = 0x3;  //8bit 1stop no parity
    UCON0   = 0x5;
    
    UFCON0 = 0X01;
    UMCON0 = 0;
    
    UBRDIV0 = 35;    //115200Hz
    UDIVSLOT0 = 0X1;

   // GPHCON |= (0xa<<0);
    //GPHUDP 
    
}
















