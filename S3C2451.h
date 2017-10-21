#ifndef NULL
#define NULL 0
#endif

/*GPIO*/
#define GPACON      (*(volatile unsigned long *)(0x56000000))
#define GPADAT      (*(volatile unsigned long *)(0x56000004))

#define GPBCON      (*(volatile unsigned long *)(0x56000010))
#define GPBDAT      (*(volatile unsigned long *)(0x56000014))
#define GPBUDP      (*(volatile unsigned long *)(0x56000018))
#define GPBSEL      (*(volatile unsigned long *)(0x5600001c))

#define GPCCON      (*(volatile unsigned long *)(0x56000020))
#define GPCDAT      (*(volatile unsigned long *)(0x56000024))
#define GPCUDP      (*(volatile unsigned long *)(0x56000028))

#define GPDCON      (*(volatile unsigned long *)(0x56000030))
#define GPDDAT      (*(volatile unsigned long *)(0x56000034))
#define GPDUDP      (*(volatile unsigned long *)(0x56000038))

#define GPECON      (*(volatile unsigned long *)(0x56000040))
#define GPEDAT      (*(volatile unsigned long *)(0x56000044))
#define GPEUDP      (*(volatile unsigned long *)(0x56000048))
#define GPESEL      (*(volatile unsigned long *)(0x5600004c))

#define GPFCON      (*(volatile unsigned long *)(0x56000050))
#define GPFDAT      (*(volatile unsigned long *)(0x56000054))
#define GPFUDP      (*(volatile unsigned long *)(0x56000058))

#define GPGCON      (*(volatile unsigned long *)(0x56000060))
#define GPGDAT      (*(volatile unsigned long *)(0x56000064))
#define GPGUDP      (*(volatile unsigned long *)(0x56000068))

#define GPHCON      (*(volatile unsigned long *)(0x56000070))
#define GPHDAT      (*(volatile unsigned long *)(0x56000074))
#define GPHUDP      (*(volatile unsigned long *)(0x56000078))

#define GPJCON      (*(volatile unsigned long *)(0x56000040))
#define GPJDAT      (*(volatile unsigned long *)(0x56000044))
#define GPJUDP      (*(volatile unsigned long *)(0x56000048))
#define GPJSEL      (*(volatile unsigned long *)(0x560000dc))

#define GPKCON      (*(volatile unsigned long *)(0x560000e0))
#define GPKDAT      (*(volatile unsigned long *)(0x560000e4))
#define GPKUDP      (*(volatile unsigned long *)(0x560000e8))

#define GPLCON      (*(volatile unsigned long *)(0x560000f0))
#define GPLDAT      (*(volatile unsigned long *)(0x560000f4))
#define GPLUDP      (*(volatile unsigned long *)(0x560000f8))
#define GPLSEL      (*(volatile unsigned long *)(0x560000fc))

#define GPMCON      (*(volatile unsigned long *)(0x56000100))
#define GPMDAT      (*(volatile unsigned long *)(0x56000104))
#define GPMUDP      (*(volatile unsigned long *)(0x56000108))

#define MISCCR      (*(volatile unsigned long *)(0x56000080))
#define DCLKCON     (*(volatile unsigned long *)(0x56000084))
/*Clock*/
#define LOCKCON0    (*(volatile unsigned long *)(0x4c000000))
#define MPLLCON     (*(volatile unsigned long *)(0x4c000010))
#define EPLLCON     (*(volatile unsigned long *)(0x4c000018))
#define EPLLCONK    (*(volatile unsigned long *)(0x4c00001c))
#define CLKSRC      (*(volatile unsigned long *)(0x4c000020))
#define CLKDIV0     (*(volatile unsigned long *)(0x4c000024))
#define CLKDIV1     (*(volatile unsigned long *)(0x4c000028))
#define CLKDIV2     (*(volatile unsigned long *)(0x4c00002c))
#define HCLKCON     (*(volatile unsigned long *)(0x4c000030))
#define PCLKCON     (*(volatile unsigned long *)(0x4c000034))
#define SCLKCON     (*(volatile unsigned long *)(0x4c000038))
/*UART*/
#define ULCON0      (*(volatile unsigned char *)(0x50000000))
#define ULCON1      (*(volatile unsigned char *)(0x50004000))
#define ULCON2      (*(volatile unsigned char *)(0x50008000))
#define ULCON3      (*(volatile unsigned char *)(0x5000c000))
#define UCON0      (*(volatile unsigned short *)(0x50000004))
#define UCON1      (*(volatile unsigned short *)(0x50004004))
#define UCON2      (*(volatile unsigned short *)(0x50008004))
#define UCON3      (*(volatile unsigned short *)(0x5000c004))
#define UFCON0      (*(volatile unsigned char *)(0x50000008))
#define UFCON1      (*(volatile unsigned char *)(0x50004008))
#define UFCON2      (*(volatile unsigned char *)(0x50008008))
#define UFCON3      (*(volatile unsigned char *)(0x5000C008))
#define UMCON0      (*(volatile unsigned char *)(0x5000000C))
#define UMCON1      (*(volatile unsigned char *)(0x5000400C))
#define UMCON2      (*(volatile unsigned char *)(0x5000800C))
#define UTRSTAT0    (*(volatile unsigned char *)(0x50000010))
#define UTRSTAT1    (*(volatile unsigned char *)(0x50004010))
#define UTRSTAT2    (*(volatile unsigned char *)(0x50008010))
#define UTRSTAT3    (*(volatile unsigned char *)(0x5000C010))
#define UTXH0       (*(volatile unsigned char *)(0x50000020))
#define UTXH1       (*(volatile unsigned char *)(0x50004020))
#define UTXH2       (*(volatile unsigned char *)(0x50008020))
#define UTXH3       (*(volatile unsigned char *)(0x5000C020))
#define URXH0       (*(volatile unsigned char *)(0x50000024))
#define URXH1       (*(volatile unsigned char *)(0x50004024))
#define URXH2       (*(volatile unsigned char *)(0x50008024))
#define URXH3       (*(volatile unsigned char *)(0x5000C024))

#define UBRDIV0    (*(volatile unsigned short *)(0x50000028))
#define UBRDIV1    (*(volatile unsigned short *)(0x50004028))
#define UBRDIV2    (*(volatile unsigned short *)(0x50008028))
#define UBRDIV3    (*(volatile unsigned short *)(0x5000C028))
#define UDIVSLOT0  (*(volatile unsigned short *)(0x5000002C))
#define UDIVSLOT1  (*(volatile unsigned short *)(0x5000402C))
#define UDIVSLOT2  (*(volatile unsigned short *)(0x5000802C))
#define UDIVSLOT3  (*(volatile unsigned short *)(0x5000C02C))
/*SDRAM*/
#define BANKCFG     (*(volatile unsigned long *)(0x48000000))
#define BANkCON1    (*(volatile unsigned long *)(0x48000004))
#define BANKCON2    (*(volatile unsigned long *)(0x48000008))
#define BANKCON3    (*(volatile unsigned long *)(0x4800000c))
#define REFRESH     (*(volatile unsigned long *)(0x48000010))
#define TIMEOUT     (*(volatile unsigned long *)(0x48000014))
/*IRQ*/
#define EXTINT0      (*(volatile unsigned long *)(0x56000088))
#define EINTPEND     (*(volatile unsigned long *)(0x560000A8))
#define SRCPND       (*(volatile unsigned long *)(0x4A000000))
#define INTMOD       (*(volatile unsigned long *)(0x4A000004))
#define INTMSK       (*(volatile unsigned long *)(0x4A000008))
#define INTPND       (*(volatile unsigned long *)(0x4A000010))
#define INTOFFSET    (*(volatile unsigned long *)(0x4A000014))































