#ifndef __S3C2416_H__
#define __S3C2416_H__

// chapter2 SYSEM CONTROLLER - jcs
#define rLOCKCON0    (*(volatile unsigned *)0x4C000000)  		//MPLL lock time conut
#define rLOCKCON1    (*(volatile unsigned *)0x4C000004)  		//EPLL lock time count
#define rOSCSET      (*(volatile unsigned *)0x4C000008)  		//OSC stabilization control
#define rMPLLCON     (*(volatile unsigned *)0x4C000010)  		//MPLL configuration
#define rEPLLCON     (*(volatile unsigned *)0x4C000018)  		//EPLL configuration
#define rEPLLCON_K   (*(volatile unsigned *)0x4C00001C)  		//EPLL configuration
#define rCLKSRC      (*(volatile unsigned *)0x4C000020)  		//Clock source control
#define rCLKDIV0     (*(volatile unsigned *)0x4C000024)  		//Clock divider ratio control
#define rCLKDIV1     (*(volatile unsigned *)0x4C000028)  		//Clock divider ratio control
#define rCLKDIV2     (*(volatile unsigned *)0x4C00002C)  		//Clock divider ratio control
#define rHCLKCON     (*(volatile unsigned *)0x4C000030)  		//HCLK enable
#define rPCLKCON     (*(volatile unsigned *)0x4C000034)  		//PCLK enable
#define rSCLKCON     (*(volatile unsigned *)0x4C000038)  		//Special clock enable
#define rPWRMODE     (*(volatile unsigned *)0x4C000040)  		//Power mode control
#define rSWRST       (*(volatile unsigned *)0x4C000044)  		//Software reset control
#define rBUSPRI0     (*(volatile unsigned *)0x4C000050)  		//Bus priority control
#define rPWRCFG      (*(volatile unsigned *)0x4C000060)  		//Power management configuration control
#define rRSTCON      (*(volatile unsigned *)0x4C000064)  		//Reset control 
#define rRSTSTAT     (*(volatile unsigned *)0x4C000068)  		//Reset status
#define rWKUPSTAT    (*(volatile unsigned *)0x4C00006c)  		//Wakeup status
#define rINFORM0     (*(volatile unsigned *)0x4C000070)  		//Sleep mode information 0
#define rINFORM1     (*(volatile unsigned *)0x4C000074)  		//Sleep mode information 1
#define rINFORM2     (*(volatile unsigned *)0x4C000078)  		//Sleep mode information 2
#define rINFORM3     (*(volatile unsigned *)0x4C00007C)  		//Sleep mode information 3
#define rUSB_PHYCTRL (*(volatile unsigned *)0x4C000080)  		//USB phy control
#define rUSB_PHYPWR  (*(volatile unsigned *)0x4C000084)  		//USB phy power control
#define rUSB_RSTCON  (*(volatile unsigned *)0x4C000088)  		//USB phy reset control
#define rUSB_CLKCON  (*(volatile unsigned *)0x4C00008C)  		//USB phy clock control


// chapter3 EBI - oh
#define rBPRIORITY0	 (*(volatile unsigned *)0x4E800000)	//Matrix core 0 priority decision - edited by junon
#define rBPRIORITY1	 (*(volatile unsigned *)0x4E800004)	//Matrix core 1 priority decision - added by junon
#define rEBICON   	 (*(volatile unsigned *)0x4E800008)	//Bank Configuration - edited by junon


// chapter5 SSMC - junon
#define rSMBIDCYR0   (*(volatile unsigned *)0x4F000000)	//Bank0 idle cycle control 
#define rSMBIDCYR1   (*(volatile unsigned *)0x4F000020)	//Bank1 idle cycle control 
#define rSMBIDCYR2   (*(volatile unsigned *)0x4F000040)	//Bank2 idle cycle control 
#define rSMBIDCYR3   (*(volatile unsigned *)0x4F000060)	//Bank3 idle cycle control 
#define rSMBIDCYR4   (*(volatile unsigned *)0x4F000080)	//Bank0 idle cycle control 
#define rSMBIDCYR5   (*(volatile unsigned *)0x4F0000A0)	//Bank5 idle cycle control 
#define rSMBWSTRDR0  (*(volatile unsigned *)0x4F000004)	//Bank0 read wait state control 
#define rSMBWSTRDR1  (*(volatile unsigned *)0x4F000024)	//Bank1 read wait state control
#define rSMBWSTRDR2  (*(volatile unsigned *)0x4F000044)	//Bank2 read wait state control
#define rSMBWSTRDR3  (*(volatile unsigned *)0x4F000064)	//Bank3 read wait state control 
#define rSMBWSTRDR4  (*(volatile unsigned *)0x4F000084)	//Bank4 read wait state control 
#define rSMBWSTRDR5  (*(volatile unsigned *)0x4F0000A4)	//Bank5 read wait state control 
#define rSMBWSTWRR0  (*(volatile unsigned *)0x4F000008)	//Bank0 write wait state control 
#define rSMBWSTWRR1  (*(volatile unsigned *)0x4F000028)	//Bank1 write wait state control 
#define rSMBWSTWRR2  (*(volatile unsigned *)0x4F000048)	//Bank2 write wait state control 
#define rSMBWSTWRR3  (*(volatile unsigned *)0x4F000068)	//Bank3 write wait state control 
#define rSMBWSTWRR4  (*(volatile unsigned *)0x4F000088)	//Bank4 write wait state control 
#define rSMBWSTWRR5  (*(volatile unsigned *)0x4F0000A8)	//Bank5 write wait state control 
#define rSMBWSTOENR0 (*(volatile unsigned *)0x4F00000C)	//Bank0 output enable assertion delay control 
#define rSMBWSTOENR1 (*(volatile unsigned *)0x4F00002C)	//Bank1 output enable assertion delay control 
#define rSMBWSTOENR2 (*(volatile unsigned *)0x4F00004C)	//Bank2 output enable assertion delay control
#define rSMBWSTOENR3 (*(volatile unsigned *)0x4F00006C)	//Bank3 output enable assertion delay control 
#define rSMBWSTOENR4 (*(volatile unsigned *)0x4F00008C)	//Bank4 output enable assertion delay control
#define rSMBWSTOENR5 (*(volatile unsigned *)0x4F0000AC)	//Bank5 output enable assertion delay control 
#define rSMBWSTWENR0 (*(volatile unsigned *)0x4F000010)	//Bank0 write enable assertion delay control 
#define rSMBWSTWENR1 (*(volatile unsigned *)0x4F000030)	//Bank1 write enable assertion delay control 
#define rSMBWSTWENR2 (*(volatile unsigned *)0x4F000050)	//Bank2 write enable assertion delay control 
#define rSMBWSTWENR3 (*(volatile unsigned *)0x4F000070)	//Bank3 write enable assertion delay control 
#define rSMBWSTWENR4 (*(volatile unsigned *)0x4F000090)	//Bank4 write enable assertion delay control 
#define rSMBWSTWENR5 (*(volatile unsigned *)0x4F0000B0)	//Bank5 write enable assertion delay control 
#define rSMBCR0      (*(volatile unsigned *)0x4F000014)	//Bank0 control 
#define rSMBCR1      (*(volatile unsigned *)0x4F000034)	//Bank1 control 
#define rSMBCR2      (*(volatile unsigned *)0x4F000054)	//Bank2 control 
#define rSMBCR3      (*(volatile unsigned *)0x4F000074)	//Bank3 control 
#define rSMBCR4      (*(volatile unsigned *)0x4F000094)	//Bank4 control 
#define rSMBCR5      (*(volatile unsigned *)0x4F0000B4)	//Bank5 control 
#define rSMBSR0      (*(volatile unsigned *)0x4F000018)	//Bank0 status 
#define rSMBSR1      (*(volatile unsigned *)0x4F000038)	//Bank1 status 
#define rSMBSR2      (*(volatile unsigned *)0x4F000058)	//Bank2 status 
#define rSMBSR3      (*(volatile unsigned *)0x4F000078)	//Bank3 status 
#define rSMBSR4      (*(volatile unsigned *)0x4F000098)	//Bank4 status 
#define rSMBSR5      (*(volatile unsigned *)0x4F0000B8)	//Bank5 status 
#define rSMBWSTBRDR0 (*(volatile unsigned *)0x4F00001C)	//Bank0 burst read wait delay control 
#define rSMBWSTBRDR1 (*(volatile unsigned *)0x4F00003C)	//Bank1 burst read wait delay control 
#define rSMBWSTBRDR2 (*(volatile unsigned *)0x4F00005C)	//Bank2 burst read wait delay control 
#define rSMBWSTBRDR3 (*(volatile unsigned *)0x4F00007C)	//Bank3 burst read wait delay control 
#define rSMBWSTBRDR4 (*(volatile unsigned *)0x4F00009C)	//Bank4 burst read wait delay control 
#define rSMBWSTBRDR5 (*(volatile unsigned *)0x4F0000BC)	//Bank5 burst read wait delay control 
#define rSMBONETYPER (*(volatile unsigned *)0x4F000100)	//OneNAND type selection - added by junon
#define rSMCSR		 (*(volatile unsigned *)0x4F000200)	//SROMC status - edited by junon
#define rSMCCR       (*(volatile unsigned *)0x4F000204)	//SROMC control - edited by junon


// chapter6 MOBILE DRAM CONTROLLER - oh
#define rBANKCFG    (*(volatile unsigned *)0x48000000)	//Mobile DRAM configuration
#define rBANKCON1   (*(volatile unsigned *)0x48000004)	//Mobile DRAM control 
#define rBANKCON2   (*(volatile unsigned *)0x48000008)	//Mobile DRAM timing control 
#define rBANKCON3   (*(volatile unsigned *)0x4800000C)	//Mobile DRAM (E)MRS 
#define rREFRESH    (*(volatile unsigned *)0x48000010)	//Mobile DRAM refresh control
#define rTIMEOUT    (*(volatile unsigned *)0x48000014)	//Write Buffer Time out control 


// chapter7 Nand Flash - jcs
// chapter7 Nand Flash - grmoon
// chapter7 Nand Flash - grmoon
#define rNFCONF				(*(volatile unsigned *)0x4E000000)		 
#define rNFCONT				(*(volatile unsigned *)0x4E000004)     
#define rNFCMD				(*(volatile unsigned *)0x4E000008)     
#define rNFADDR				(*(volatile unsigned *)0x4E00000C)     
#define rNFDATA				(*(volatile unsigned *)0x4E000010)     
#define rNFDATA8			(*(volatile unsigned char*)0x4E000010)     
#define rNFMECCD0			(*(volatile unsigned *)0x4E000014)     
#define rNFMECCD1			(*(volatile unsigned *)0x4E000018)     
#define rNFSECCD			(*(volatile unsigned *)0x4E00001C)     
#define rNFSBLK				(*(volatile unsigned *)0x4E000020)	  	
#define rNFEBLK				(*(volatile unsigned *)0x4E000024)		 
#define rNFSTAT				(*(volatile unsigned *)0x4E000028) 	   
#define rNFECCERR0			(*(volatile unsigned *)0x4E00002C)     
#define rNFECCERR1			(*(volatile unsigned *)0x4E000030)     
#define rNFMECC0			(*(volatile unsigned *)0x4E000034)     
#define rNFMECC1			(*(volatile unsigned *)0x4E000038)     
#define rNFSECC				(*(volatile unsigned *)0x4E00003C)	   
#define rNFMLCBITPT			(*(volatile unsigned *)0x4E000040)  		
#define rNF8ECCERR0	  		(*(volatile unsigned *)0x4E000044)  		
#define rNF8ECCERR1  		(*(volatile unsigned *)0x4E000048)
#define rNF8ECCERR2    		(*(volatile unsigned *)0x4E00004C)
#define rNFM8ECC0			(*(volatile unsigned *)0x4E000050)
#define rNFM8ECC1			(*(volatile unsigned *)0x4E000054)
#define rNFM8ECC2			(*(volatile unsigned *)0x4E000058)
#define rNFM8ECC3			(*(volatile unsigned *)0x4E00005C)
#define rNFMLC8BITPT0		(*(volatile unsigned *)0x4E000060)
#define rNFMLC8BITPT1		(*(volatile unsigned *)0x4E000064)

//chapter8 CF Interface 
#define rMUX_REG             (*(volatile unsigned *)0x4B801800) //Top level control & configuration register
#define rPCCARD_CFG          (*(volatile unsigned *)0x4B801820) //PC card configuration & status register
#define rPCCARD_INT          (*(volatile unsigned *)0x4B801824) //PC card interrupt mask & source regiseter
#define rPCCARD_ATTR         (*(volatile unsigned *)0x4B801828) //PC card attribute memory area operation timing config regiseter
#define rPCCARD_IO           (*(volatile unsigned *)0x4B80182C) //PC card I/O area operation timing config regiseter
#define rPCCARD_COMM         (*(volatile unsigned *)0x4B801830) //PC card common memory area operation timing config regiseter
#define rATA_CON             (*(volatile unsigned *)0x4B801900) //ATA_CONTROL register
#define rATA_STAT            (*(volatile unsigned *)0x4B801904) //ATA_STATUS register
#define rATA_CMD             (*(volatile unsigned *)0x4B801908) //ATA transfer command
#define rATA_SWRST           (*(volatile unsigned *)0x4B80190C) //Software reset for the ATAPI host
#define rATA_IRQ             (*(volatile unsigned *)0x4B801910) //ATA_IRQ register
#define rATA_IRQ_MASK        (*(volatile unsigned *)0x4B801914) //ATA_IRQ Mask register
#define rATA_CFG             (*(volatile unsigned *)0x4B801918) //ATA_CFG register
#define rATA_PIO_TIME        (*(volatile unsigned *)0x4B80192C) //ATA_PIO_TIME register
#define rATA_UDMA_TIME       (*(volatile unsigned *)0x4B801930) //ATA_UDMA_TIME register
#define rATA_XFR_NUM         (*(volatile unsigned *)0x4B801934) //Data transfer number register
#define rATA_XFR_CNT         (*(volatile unsigned *)0x4B801938) //Current remaining transfer counter
#define rATA_TBUF_START      (*(volatile unsigned *)0x4B80193C) //Start address of track buffer 
#define rATA_TBUF_SIZE       (*(volatile unsigned *)0x4B801940) //Size of track buffer 
#define rATA_SBUF_START      (*(volatile unsigned *)0x4B801944) //Start address of source buffer
#define rATA_SBUF_SIZE       (*(volatile unsigned *)0x4B801948) //Size of source buffer
#define rATA_CADDR_TBUR      (*(volatile unsigned *)0x4B80194C) //Current address of track buffer
#define rATA_CADDR_SBUF      (*(volatile unsigned *)0x4B801950) //Current address of source buffer
#define rATA_PIO_DTR         (*(volatile unsigned *)0x4B801954) //16-bit PIO data register
#define rATA_PIO_FED         (*(volatile unsigned *)0x4B801958) //8-bit PIO device feature/error (command block) register
#define rATA_PIO_SCR         (*(volatile unsigned *)0x4B80195C) //8-bit PIO device sector count (command block) register
#define rATA_PIO_LLR         (*(volatile unsigned *)0x4B801960) //8-bit PIO device LBA low (command block) register
#define rATA_PIO_LMR         (*(volatile unsigned *)0x4B801964) //8-bit PIO device LBA middle (command block) register
#define rATA_PIO_LHR         (*(volatile unsigned *)0x4B801968) //8-bit PIO LBA high (command block) register
#define rATA_PIO_DVR         (*(volatile unsigned *)0x4B80196C) //8-bit PIO device (command block) register
#define rATA_PIO_CSD         (*(volatile unsigned *)0x4B801970) //8-bit PIO device command/status (command block) register
#define rATA_PIO_DAD         (*(volatile unsigned *)0x4B801974) //8-bit PIO device control/alternate status (control block) register
#define rATA_PIO_READY       (*(volatile unsigned *)0x4B801978) //ATA_PIO_READY register
#define rATA_PIO_RDATA       (*(volatile unsigned *)0x4B80197C) //PIO read data register while HOST read from ATA device register
#define rBUS_FIFO_STATUS     (*(volatile unsigned *)0x4B801990) //BUS_FIFO_STATUS  register
#define rATA_FIFO_STATUS     (*(volatile unsigned *)0x4B801994) //ATA_FIFO_STATUS  register


// chapter9 DMA - jcs
#define rDISRC0     (*(volatile unsigned *)0x4b000000)	//DMA 0 Initial source
#define rDISRCC0    (*(volatile unsigned *)0x4b000004)	//DMA 0 Initial source control
#define rDIDST0     (*(volatile unsigned *)0x4b000008)	//DMA 0 Initial Destination
#define rDIDSTC0    (*(volatile unsigned *)0x4b00000c)	//DMA 0 Initial Destination control
#define rDCON0      (*(volatile unsigned *)0x4b000010)	//DMA 0 Control
#define rDSTAT0     (*(volatile unsigned *)0x4b000014)	//DMA 0 Status (Read Only)
#define rDCSRC0     (*(volatile unsigned *)0x4b000018)	//DMA 0 Current source (Read Only)
#define rDCDST0     (*(volatile unsigned *)0x4b00001c)	//DMA 0 Current destination (Read Only)
#define rDMASKTRIG0 (*(volatile unsigned *)0x4b000020)	//DMA 0 Mask trigger
#define rDMAREQSEL0 (*(volatile unsigned *)0x4b000024)	//DMA 0 Request Selection register
#define rDISRC1     (*(volatile unsigned *)0x4b000100)	//DMA 1 Initial source
#define rDISRCC1    (*(volatile unsigned *)0x4b000104)	//DMA 1 Initial source control
#define rDIDST1     (*(volatile unsigned *)0x4b000108)	//DMA 1 Initial Destination
#define rDIDSTC1    (*(volatile unsigned *)0x4b00010c)	//DMA 1 Initial Destination control
#define rDCON1      (*(volatile unsigned *)0x4b000110)	//DMA 1 Control
#define rDSTAT1     (*(volatile unsigned *)0x4b000114)	//DMA 1 Status (Read Only)
#define rDCSRC1     (*(volatile unsigned *)0x4b000118)	//DMA 1 Current source (Read Only)
#define rDCDST1     (*(volatile unsigned *)0x4b00011c)	//DMA 1 Current destination (Read Only)
#define rDMASKTRIG1 (*(volatile unsigned *)0x4b000120)	//DMA 1 Mask trigger
#define rDMAREQSEL1 (*(volatile unsigned *)0x4b000124)	//DMA 1 Request Selection register
#define rDISRC2     (*(volatile unsigned *)0x4b000200)	//DMA 2 Initial source
#define rDISRCC2    (*(volatile unsigned *)0x4b000204)	//DMA 2 Initial source control
#define rDIDST2     (*(volatile unsigned *)0x4b000208)	//DMA 2 Initial Destination
#define rDIDSTC2    (*(volatile unsigned *)0x4b00020c)	//DMA 2 Initial Destination control
#define rDCON2      (*(volatile unsigned int*)0x4b000210)	//DMA 2 Control
#define rDSTAT2     (*(volatile unsigned *)0x4b000214)	//DMA 2 Status (Read Only)
#define rDCSRC2     (*(volatile unsigned *)0x4b000218)	//DMA 2 Current source (Read Only)
#define rDCDST2     (*(volatile unsigned *)0x4b00021c)	//DMA 2 Current destination (Read Only)
#define rDMASKTRIG2 (*(volatile unsigned *)0x4b000220)	//DMA 2 Mask trigger
#define rDMAREQSEL2 (*(volatile unsigned *)0x4b000224)	//DMA 2 Request Selection register
#define rDISRC3     (*(volatile unsigned *)0x4b000300)	//DMA 3 Initial source
#define rDISRCC3    (*(volatile unsigned *)0x4b000304)	//DMA 3 Initial source control
#define rDIDST3     (*(volatile unsigned *)0x4b000308)	//DMA 3 Initial Destination
#define rDIDSTC3    (*(volatile unsigned *)0x4b00030c)	//DMA 3 Initial Destination control
#define rDCON3      (*(volatile unsigned *)0x4b000310)	//DMA 3 Control
#define rDSTAT3     (*(volatile unsigned *)0x4b000314)	//DMA 3 Status (Read Only)
#define rDCSRC3     (*(volatile unsigned *)0x4b000318)	//DMA 3 Current source (Read Only)
#define rDCDST3     (*(volatile unsigned *)0x4b00031c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG3 (*(volatile unsigned *)0x4b000320)	//DMA 3 Mask trigger
#define rDMAREQSEL3 (*(volatile unsigned *)0x4b000324)	//DMA 3 Request Selection register
#define rDISRC4     (*(volatile unsigned *)0x4b000400)	//DMA 3 Initial source
#define rDISRCC4    (*(volatile unsigned *)0x4b000404)	//DMA 3 Initial source control
#define rDIDST4     (*(volatile unsigned *)0x4b000408)	//DMA 3 Initial Destination
#define rDIDSTC4    (*(volatile unsigned *)0x4b00040c)	//DMA 3 Initial Destination control
#define rDCON4      (*(volatile unsigned *)0x4b000410)	//DMA 3 Control
#define rDSTAT4     (*(volatile unsigned *)0x4b000414)	//DMA 3 Status (Read Only)
#define rDCSRC4     (*(volatile unsigned *)0x4b000418)	//DMA 3 Current source (Read Only)
#define rDCDST4     (*(volatile unsigned *)0x4b00041c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG4 (*(volatile unsigned *)0x4b000420)	//DMA 3 Mask trigger
#define rDMAREQSEL4 (*(volatile unsigned *)0x4b000424)	//DMA 3 Request Selection register
#define rDISRC5     (*(volatile unsigned *)0x4b000500)	//DMA 3 Initial source
#define rDISRCC5    (*(volatile unsigned *)0x4b000504)	//DMA 3 Initial source control
#define rDIDST5     (*(volatile unsigned *)0x4b000508)	//DMA 3 Initial Destination
#define rDIDSTC5    (*(volatile unsigned *)0x4b00050c)	//DMA 3 Initial Destination control
#define rDCON5      (*(volatile unsigned *)0x4b000510)	//DMA 3 Control
#define rDSTAT5     (*(volatile unsigned *)0x4b000514)	//DMA 3 Status (Read Only)
#define rDCSRC5     (*(volatile unsigned *)0x4b000518)	//DMA 3 Current source (Read Only)
#define rDCDST5     (*(volatile unsigned *)0x4b00051c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG5 (*(volatile unsigned *)0x4b000520)	//DMA 3 Mask trigger
#define rDMAREQSEL5 (*(volatile unsigned *)0x4b000524)	//DMA 3 Request Selection register
#define rDISRC6     (*(volatile unsigned *)0x4b000600)	//DMA 3 Initial source
#define rDISRCC6    (*(volatile unsigned *)0x4b000604)	//DMA 3 Initial source control
#define rDIDST6     (*(volatile unsigned *)0x4b000608)	//DMA 3 Initial Destination
#define rDIDSTC6    (*(volatile unsigned *)0x4b00060c)	//DMA 3 Initial Destination control
#define rDCON6      (*(volatile unsigned *)0x4b000610)	//DMA 3 Control
#define rDSTAT6     (*(volatile unsigned *)0x4b000614)	//DMA 3 Status (Read Only)
#define rDCSRC6     (*(volatile unsigned *)0x4b000618)	//DMA 3 Current source (Read Only)
#define rDCDST6     (*(volatile unsigned *)0x4b00061c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG6 (*(volatile unsigned *)0x4b000620)	//DMA 3 Mask trigger
#define rDMAREQSEL6 (*(volatile unsigned *)0x4b000624)	//DMA 3 Request Selection register
#define rDISRC7     (*(volatile unsigned *)0x4b000700)	//DMA 3 Initial source
#define rDISRCC7    (*(volatile unsigned *)0x4b000704)	//DMA 3 Initial source control
#define rDIDST7     (*(volatile unsigned *)0x4b000708)	//DMA 3 Initial Destination
#define rDIDSTC7    (*(volatile unsigned *)0x4b00070c)	//DMA 3 Initial Destination control
#define rDCON7      (*(volatile unsigned *)0x4b000710)	//DMA 3 Control
#define rDSTAT7     (*(volatile unsigned *)0x4b000714)	//DMA 3 Status (Read Only)
#define rDCSRC7     (*(volatile unsigned *)0x4b000718)	//DMA 3 Current source (Read Only)
#define rDCDST7     (*(volatile unsigned *)0x4b00071c)	//DMA 3 Current destination (Read Only)
#define rDMASKTRIG7 (*(volatile unsigned *)0x4b000720)	//DMA 3 Mask trigger
#define rDMAREQSEL7 (*(volatile unsigned *)0x4b000724)	//DMA 3 Request Selection register 

#define DMA_REG_BASE 	0x4B000000	// added by junon
#define DMA_REG_OFFSET 	0x100

// chapter10 INTERRUPT - gom
#define rSRCPND					(*(volatile unsigned *)0x4a000000)	//Interrupt request status
#define rINTMOD					(*(volatile unsigned *)0x4a000004)	//Interrupt mode control
#define rINTMSK					(*(volatile unsigned *)0x4a000008)	//Interrupt mask control
#define rINTPND					(*(volatile unsigned *)0x4a000010)	//Interrupt request status
#define rINTOFFSET				(*(volatile unsigned *)0x4a000014)	//Interruot request source offset
#define rSUBSRCPND				(*(volatile unsigned *)0x4a000018)	//Sub source pending
#define rINTSUBMSK				(*(volatile unsigned *)0x4a00001c)	//Interrupt sub mask
#define rPRIORITY_MODE1			(*(volatile unsigned *)0x4a000030)	//Interrupt request status
#define rPRIORITY_UPDATE1		(*(volatile unsigned *)0x4a000034)	//Interrupt mode control
#define rSRCPND2				(*(volatile unsigned *)0x4a000040)	//Interrupt request status
#define rINTMOD2				(*(volatile unsigned *)0x4a000044)	//Interrupt mode control
#define rINTMSK2				(*(volatile unsigned *)0x4a000048)	//Interrupt mask control
#define rINTPND2				(*(volatile unsigned *)0x4a000050)	//Interrupt request status
#define rINTOFFSET2				(*(volatile unsigned *)0x4a000054)	//Interruot request source offset
#define rPRIORITY_MODE2			(*(volatile unsigned *)0x4a000070)	//Interrupt request status
#define rPRIORITY_UPDATE2		(*(volatile unsigned *)0x4a000074)	//Interrupt mode control

// chapter11 I/O PORT - oh
#define  rGPACON			(*(volatile unsigned *)(0x56000000))	
#define  rGPADAT			(*(volatile unsigned *)(0x56000004))	
#define  rGPBCON			(*(volatile unsigned *)(0x56000010))	
#define  rGPBDAT			(*(volatile unsigned *)(0x56000014))	
#define  rGPBUDP			(*(volatile unsigned *)(0x56000018))	
#define  rGPBSEL			(*(volatile unsigned *)(0x5600001c))	
#define  rGPCCON			(*(volatile unsigned *)(0x56000020))	
#define  rGPCDAT			(*(volatile unsigned *)(0x56000024))	
#define  rGPCUDP			(*(volatile unsigned *)(0x56000028))	
#define  rGPDCON			(*(volatile unsigned *)(0x56000030))	
#define  rGPDDAT			(*(volatile unsigned *)(0x56000034))	
#define  rGPDUDP			(*(volatile unsigned *)(0x56000038))	
#define  rGPECON			(*(volatile unsigned *)(0x56000040))	
#define  rGPEDAT			(*(volatile unsigned *)(0x56000044))	
#define  rGPEUDP			(*(volatile unsigned *)(0x56000048))	
#define  rGPESEL			(*(volatile unsigned *)(0x5600004c))	
#define  rGPFCON			(*(volatile unsigned *)(0x56000050))	
#define  rGPFDAT			(*(volatile unsigned *)(0x56000054))	
#define  rGPFUDP			(*(volatile unsigned *)(0x56000058))	
#define  rGPGCON			(*(volatile unsigned *)(0x56000060))	
#define  rGPGDAT			(*(volatile unsigned *)(0x56000064))	
#define  rGPGUDP			(*(volatile unsigned *)(0x56000068))	
#define  rGPHCON			(*(volatile unsigned *)(0x56000070))	
#define  rGPHDAT			(*(volatile unsigned *)(0x56000074))	
#define  rGPHUDP			(*(volatile unsigned *)(0x56000078))	
#define  rGPJCON			(*(volatile unsigned *)(0x560000d0))	
#define  rGPJDAT			(*(volatile unsigned *)(0x560000d4))	
#define  rGPJUDP			(*(volatile unsigned *)(0x560000d8))	
#define  rGPJSEL			(*(volatile unsigned *)(0x560000dc))	
#define  rGPKCON			(*(volatile unsigned *)(0x560000e0))	
#define  rGPKDAT			(*(volatile unsigned *)(0x560000e4))	
#define  rGPKUDP			(*(volatile unsigned *)(0x560000e8))	
#define  rGPLCON			(*(volatile unsigned *)(0x560000f0))	
#define  rGPLDAT			(*(volatile unsigned *)(0x560000f4))	
#define  rGPLUDP			(*(volatile unsigned *)(0x560000f8))	
#define  rGPLSEL			(*(volatile unsigned *)(0x560000fc))	
#define  rGPMCON			(*(volatile unsigned *)(0x56000100))	
#define  rGPMDAT			(*(volatile unsigned *)(0x56000104))	
#define  rGPMUDP			(*(volatile unsigned *)(0x56000108))	
#define  rMISCCR			(*(volatile unsigned *)(0x56000080))	
#define  rDCLKCON			(*(volatile unsigned *)(0x56000084))	
#define  rEXTINT0			(*(volatile unsigned *)(0x56000088))	
#define  rEXTINT1			(*(volatile unsigned *)(0x5600008c))	
#define  rEXTINT2			(*(volatile unsigned *)(0x56000090))	
#define  rEINTFLT2			(*(volatile unsigned *)(0x5600009c))	
#define  rEINTFLT3			(*(volatile unsigned *)(0x4c6000a0))	
#define  rEINTMASK			(*(volatile unsigned *)(0x560000a4))	
#define  rEINTPEND			(*(volatile unsigned *)(0x560000a8))	
#define  rGSTATUS0			(*(volatile unsigned *)(0x560000ac))	
#define  rGSTATUS1			(*(volatile unsigned *)(0x560000b0))	
#define  rDSC0				(*(volatile unsigned *)(0x560000c0))	
#define  rDSC1				(*(volatile unsigned *)(0x560000c4))	
#define	 rDSC2				(*(volatile unsigned *)(0x560000c8))
#define  rDSC3		    	(*(volatile unsigned *)(0x56000110))	
#define  rPDDMCON			(*(volatile unsigned *)(0x56000114))	
#define  rPDSMCON			(*(volatile unsigned *)(0x56000118))

// chapter12 WATCH DOG TIMER - junon
#define rWTCON		(*(volatile unsigned *)0x53000000)	//Watch-dog timer mode
#define rWTDAT		(*(volatile unsigned *)0x53000004)	//Watch-dog timer data
#define rWTCNT		(*(volatile unsigned *)0x53000008)	//Watch-dog timer count


// chapter13 PWM TIMER - jcs
#define rTCFG0  	(*(volatile unsigned *)0x51000000)	//Configures the two 8-bit presclers
#define rTCFG1  	(*(volatile unsigned *)0x51000004)	//5-MUX & DMA mode selecton
#define rTCON   	(*(volatile unsigned *)0x51000008)	//Timer control
#define rTCNTB0 	(*(volatile unsigned *)0x5100000c)	//Timer 0 count buffer 
#define rTCMPB0 	(*(volatile unsigned *)0x51000010)	//Timer 0 compare buffer 
#define rTCNTO0 	(*(volatile unsigned *)0x51000014)	//Timer 0 count observation 
#define rTCNTB1 	(*(volatile unsigned *)0x51000018)	//Timer 1 count buffer 
#define rTCMPB1 	(*(volatile unsigned *)0x5100001c)	//Timer 1 compare buffer 
#define rTCNTO1 	(*(volatile unsigned *)0x51000020)	//Timer 1 count observation 
#define rTCNTB2 	(*(volatile unsigned *)0x51000024)	//Timer 2 count buffer 
#define rTCMPB2 	(*(volatile unsigned *)0x51000028)	//Timer 2 compare buffer 
#define rTCNTO2 	(*(volatile unsigned *)0x5100002c)	//Timer 2 count observation 
#define rTCNTB3 	(*(volatile unsigned *)0x51000030)	//Timer 3 count buffer 
#define rTCMPB3 	(*(volatile unsigned *)0x51000034)	//Timer 3 compare buffer 
#define rTCNTO3 	(*(volatile unsigned *)0x51000038)	//Timer 3 count observation 
#define rTCNTB4 	(*(volatile unsigned *)0x5100003c)	//Timer 4 count buffer 
#define rTCNTO4 	(*(volatile unsigned *)0x51000040)	//Timer 4 count observation


// chapter14 RTC - oh

#define rRTCCON		(*(volatile unsigned short *)0x57000040)	//RTC control
#define rTICNT0		(*(volatile unsigned char *)0x57000044)	//Tick time count register 0
#define rTICNT1		(*(volatile unsigned char *)0x5700004c)	//Tick time count register 1
#define rTICNT2		(*(volatile unsigned int *)0x57000048)		//Tick time count register 2
#define rRTCALM		(*(volatile unsigned char *)0x57000050)	//RTC alarm control
#define rALMSEC		(*(volatile unsigned char *)0x57000054)	//Alarm second
#define rALMMIN		(*(volatile unsigned char *)0x57000058)	//Alarm minute
#define rALMHOUR	(*(volatile unsigned char *)0x5700005c)	//Alarm Hour
#define rALMDATE	(*(volatile unsigned char *)0x57000060)	//Alarm date  // edited by junon
#define rALMMON		(*(volatile unsigned char *)0x57000064)	//Alarm month
#define rALMYEAR	(*(volatile unsigned char *)0x57000068)	//Alarm year
#define rRTCRST		(*(volatile unsigned char *)0x5700006c)	//RTC round reset
#define rBCDSEC		(*(volatile unsigned char *)0x57000070)	//BCD second
#define rBCDMIN		(*(volatile unsigned char *)0x57000074)	//BCD minute
#define rBCDHOUR	(*(volatile unsigned char *)0x57000078)	//BCD hour
#define rBCDDATE	(*(volatile unsigned char *)0x5700007c)	//BCD date  //edited by junon
#define rBCDDAY		(*(volatile unsigned char *)0x57000080)	//BCD day   //edited by junon
#define rBCDMON		(*(volatile unsigned char *)0x57000084)	//BCD month
#define rBCDYEAR	(*(volatile unsigned char *)0x57000088)	//BCD year
#define rTICKCNT	(*(volatile unsigned  *)0x57000090)		//Tick count
#define FROM_BCD(n)		 			((((n) >> 4) * 10) + ((n) & 0xf))
#define TO_BCD(n)		 			((((n) / 10) << 4) | ((n) % 10))

// chapter15 UART - gom
#define rULCON0     (*(volatile unsigned *)0x50000000)	//UART 0 Line control
#define rUCON0      (*(volatile unsigned *)0x50000004)	//UART 0 Control
#define rUFCON0     (*(volatile unsigned *)0x50000008)	//UART 0 FIFO control
#define rUMCON0     (*(volatile unsigned *)0x5000000c)	//UART 0 Modem control
#define rUTRSTAT0   (*(volatile unsigned *)0x50000010)	//UART 0 Tx/Rx status
#define rUERSTAT0   (*(volatile unsigned *)0x50000014)	//UART 0 Rx error status
#define rUFSTAT0    (*(volatile unsigned *)0x50000018)	//UART 0 FIFO status
#define rUMSTAT0    (*(volatile unsigned *)0x5000001c)	//UART 0 Modem status
#define rUBRDIV0    (*(volatile unsigned *)0x50000028)	//UART 0 Baud rate divisor
#define rUDIVSLOT0  (*(volatile unsigned *)0x5000002C)	//UART 0 Baud rate divisor
#define rULCON1     (*(volatile unsigned *)0x50004000)	//UART 1 Line control
#define rUCON1      (*(volatile unsigned *)0x50004004)	//UART 1 Control
#define rUFCON1     (*(volatile unsigned *)0x50004008)	//UART 1 FIFO control
#define rUMCON1     (*(volatile unsigned *)0x5000400c)	//UART 1 Modem control
#define rUTRSTAT1   (*(volatile unsigned *)0x50004010)	//UART 1 Tx/Rx status
#define rUERSTAT1   (*(volatile unsigned *)0x50004014)	//UART 1 Rx error status
#define rUFSTAT1    (*(volatile unsigned *)0x50004018)	//UART 1 FIFO status
#define rUMSTAT1    (*(volatile unsigned *)0x5000401c)	//UART 1 Modem status
#define rUBRDIV1    (*(volatile unsigned *)0x50004028)	//UART 1 Baud rate divisor
#define rUDIVSLOT1  (*(volatile unsigned *)0x5000402C)	//UART 1 Baud rate divisor
#define rULCON2     (*(volatile unsigned *)0x50008000)	//UART 2 Line control
#define rUCON2      (*(volatile unsigned *)0x50008004)	//UART 2 Control
#define rUFCON2     (*(volatile unsigned *)0x50008008)	//UART 2 FIFO control
#define rUMCON2     (*(volatile unsigned *)0x5000800c)	//UART 2 Modem control
#define rUTRSTAT2   (*(volatile unsigned *)0x50008010)	//UART 2 Tx/Rx status
#define rUERSTAT2   (*(volatile unsigned *)0x50008014)	//UART 2 Rx error status
#define rUFSTAT2    (*(volatile unsigned *)0x50008018)	//UART 2 FIFO status
#define rUMSTAT2    (*(volatile unsigned *)0x5000801c)	//UART 2 Modem status
#define rUBRDIV2    (*(volatile unsigned *)0x50008028)	//UART 2 Baud rate divisor
#define rUDIVSLOT2  (*(volatile unsigned *)0x5000802C)	//UART 2 Baud rate divisor
#define rULCON3     (*(volatile unsigned *)0x5000C000)	//UART 2 Line control
#define rUCON3      (*(volatile unsigned *)0x5000C004)	//UART 3 Control
#define rUFCON3     (*(volatile unsigned *)0x5000C008)	//UART 3 FIFO control
#define rUMCON3     (*(volatile unsigned *)0x5000C00c)	//UART 3 Modem control
#define rUTRSTAT3   (*(volatile unsigned *)0x5000C010)	//UART 3 Tx/Rx status
#define rUERSTAT3   (*(volatile unsigned *)0x5000C014)	//UART 3 Rx error status
#define rUFSTAT3    (*(volatile unsigned *)0x5000C018)	//UART 3 FIFO status
#define rUMSTAT3    (*(volatile unsigned *)0x5000C01c)	//UART 3 Modem status
#define rUBRDIV3    (*(volatile unsigned *)0x5000C028)	//UART 3 Baud rate divisor
#define rUDIVSLOT3  (*(volatile unsigned *)0x5000C02C)	//UART 3 Baud rate divisor

#ifdef __BIG_ENDIAN
#define rUTXH0      (*(volatile unsigned char *)0x50000023)	//UART 0 Transmission Hold
#define rURXH0      (*(volatile unsigned char *)0x50000027)	//UART 0 Receive buffer
#define rUTXH1      (*(volatile unsigned char *)0x50004023)	//UART 1 Transmission Hold
#define rURXH1      (*(volatile unsigned char *)0x50004027)	//UART 1 Receive buffer
#define rUTXH2      (*(volatile unsigned char *)0x50008023)	//UART 2 Transmission Hold
#define rURXH2      (*(volatile unsigned char *)0x50008027)	//UART 2 Receive buffer
#define rUTXH3      (*(volatile unsigned char *)0x5000C023)	//UART 3 Transmission Hold
#define rURXH3      (*(volatile unsigned char *)0x5000C027)	//UART 3 Receive buffer
#define WrUTXH0(ch) (*(volatile unsigned char *)0x50000023)=(unsigned char)(ch)
#define RdURXH0()   (*(volatile unsigned char *)0x50000027)
#define WrUTXH1(ch) (*(volatile unsigned char *)0x50004023)=(unsigned char)(ch)
#define RdURXH1()   (*(volatile unsigned char *)0x50004027)
#define WrUTXH2(ch) (*(volatile unsigned char *)0x50008023)=(unsigned char)(ch)
#define RdURXH2()   (*(volatile unsigned char *)0x50008027)
#define WrUTXH3(ch) (*(volatile unsigned char *)0x5000C023)=(unsigned char)(ch)
#define RdURXH3()   (*(volatile unsigned char *)0x5000C027)
#define UTXH0       (0x50000020+3)  //Byte_access address by DMA
#define URXH0       (0x50000024+3)
#define UTXH1       (0x50004020+3)
#define URXH1       (0x50004024+3)
#define UTXH2       (0x50008020+3)
#define URXH2       (0x50008024+3)
#define UTXH3       (0x5000C020+3)
#define URXH3       (0x5000C024+3)

#else //Little Endian
#define rUTXH0		(*(volatile unsigned char *)0x50000020)	//UART 0 Transmission Hold
#define rURXH0		(*(volatile unsigned char *)0x50000024)	//UART 0 Receive buffer
#define rUTXH1		(*(volatile unsigned char *)0x50004020)	//UART 1 Transmission Hold
#define rURXH1		(*(volatile unsigned char *)0x50004024)	//UART 1 Receive buffer
#define rUTXH2		(*(volatile unsigned char *)0x50008020)	//UART 2 Transmission Hold
#define rURXH2		(*(volatile unsigned char *)0x50008024)	//UART 2 Receive buffer
#define rUTXH3		(*(volatile unsigned char *)0x5000C020)	//UART 3 Transmission Hold
#define rURXH3		(*(volatile unsigned char *)0x5000C024)	//UART 3 Receive buffer
#define WrUTXH0(ch) (*(volatile unsigned char *)0x50000020)=(unsigned char)(ch)
#define RdURXH0()   (*(volatile unsigned char *)0x50000024)
#define WrUTXH1(ch) (*(volatile unsigned char *)0x50004020)=(unsigned char)(ch)
#define RdURXH1()   (*(volatile unsigned char *)0x50004024)
#define WrUTXH2(ch) (*(volatile unsigned char *)0x50008020)=(unsigned char)(ch)
#define RdURXH2()   (*(volatile unsigned char *)0x50008024)
#define WrUTXH3(ch) (*(volatile unsigned char *)0x5000C020)=(unsigned char)(ch)
#define RdURXH3()   (*(volatile unsigned char *)0x5000C024)
#define UTXH0       (0x50000020)    //Byte_access address by DMA
#define URXH0       (0x50000024)
#define UTXH1       (0x50004020)
#define URXH1       (0x50004024)
#define UTXH2       (0x50008020)
#define URXH2       (0x50008024)
#define UTXH3       (0x5000C020)
#define URXH3       (0x5000C024)
#endif

#define UART_REG_BASE 	0x50000000	// added by junon
#define UART_REG_OFFSET 	0x4000

// chapter16 USB HOST 1.1 - cha
#define rHcRevision            (*(volatile unsigned *)0x49000000)	//Control and status group
#define rHcControl             (*(volatile unsigned *)0x49000004)	//Control and status group
#define rHcCommonStatus        (*(volatile unsigned *)0x49000008)	//Control and status group
#define rHcInterruptStatus     (*(volatile unsigned *)0x4900000C)	//Control and status group
#define rHcInterruptEnable     (*(volatile unsigned *)0x49000010)	//Control and status group
#define rHcInterruptDisable    (*(volatile unsigned *)0x49000014)	//Control and status group
#define rHcHCCA                (*(volatile unsigned *)0x49000018)	//Memory pointer group
#define rHcPeridCuttentED      (*(volatile unsigned *)0x4900001C)	//Memory pointer group
#define rHcControlHeadED       (*(volatile unsigned *)0x49000020)	//Memory pointer group
#define rHcControlCurrentED    (*(volatile unsigned *)0x49000024)	//Memory pointer group
#define rHcBulkHeadED          (*(volatile unsigned *)0x49000028)	//Memory pointer group
#define rHcBulkCurrentED       (*(volatile unsigned *)0x4900002C)	//Memory pointer group
#define rHcDoneHead            (*(volatile unsigned *)0x49000030)	//Memory pointer group
#define rHcRmlnterval          (*(volatile unsigned *)0x49000034)	//frame counter group
#define rHcFmRemaining         (*(volatile unsigned *)0x49000038)	//frame counter group
#define rHcFmNumber            (*(volatile unsigned *)0x4900003C)	//frame counter group
#define rHcPeridicStart        (*(volatile unsigned *)0x49000040)	//frame counter group
#define rHcLSThreshold         (*(volatile unsigned *)0x49000044)	//frame counter group
#define rHcRhDescriptorA       (*(volatile unsigned *)0x49000048)	//Root hub group
#define rHcRhDescriptorB       (*(volatile unsigned *)0x4900004C)	//Root hub group
#define rHcRStatus             (*(volatile unsigned *)0x49000050)	//Root hub group
#define rHcRhPortStatus1       (*(volatile unsigned *)0x49000054)	//Root hub group
#define rHcRhPortStatus2       (*(volatile unsigned *)0x49000058)	//Root hub group


// chapter17 USB DEVICE 2.0 - cha
#define rIR     	(*(volatile unsigned char *)0x49800000)	//Index Register
#define rEIR        (*(volatile unsigned char *)0x49800004)	//Endpoint Interrupt Register
#define rEIER       (*(volatile unsigned char *)0x49800008)	//Endpoint Interrupt Enable Register
#define rFAR        (*(volatile unsigned char *)0x4980000C)	//Function Address Register 
#define rFNR        (*(volatile unsigned char *)0x49800010)	//Frame Number Register
#define rEDR    	(*(volatile unsigned char *)0x49800014) //Endpoint Direction Register
#define rTR    		(*(volatile unsigned char *)0x49800018)	//Test Register
#define rSSR    	(*(volatile unsigned char *)0x4980001C)	//System Status Register
#define rSCR        (*(volatile unsigned char *)0x49800020)	//System Control Register
#define rEP0SR      (*(volatile unsigned char *)0x49800024)	//EP0 Status Register
#define rEP0CR      (*(volatile unsigned char *)0x49800028)	//EP0 Control Register
#define rEP0BR      (*(volatile unsigned char *)0x49800060)	//EP0 Buffer Register
#define rEP1BR      (*(volatile unsigned char *)0x49800064)	//EP1 Buffer Register
#define rEP2BR      (*(volatile unsigned char *)0x49800068)	//EP2 Buffer Register
#define rEP3BR      (*(volatile unsigned char *)0x4980006C)	//EP3 Buffer Register
#define rEP4BR      (*(volatile unsigned char *)0x49800070)	//EP4 Buffer Register
#define rEP5BR      (*(volatile unsigned char *)0x49800074)	//EP5 Buffer Register
#define rEP6BR      (*(volatile unsigned char *)0x49800078)	//EP6 Buffer Register
#define rEP7BR      (*(volatile unsigned char *)0x4980007C)	//EP7 Buffer Register
#define rEP8BR      (*(volatile unsigned char *)0x49800080)	//EP8 Buffer Register
#define rFCON       (*(volatile unsigned char *)0x49800100) //Burst FIFO-DMA Control
#define rFSTAT      (*(volatile unsigned char *)0x49800104)	//Burst FIFO status
#define rESR  	    (*(volatile unsigned char *)0x4980002C)	//Endpoints Status Register
#define rECR 		(*(volatile unsigned char *)0x49800030)	//Endpoints Control Register
#define rBRCR 		(*(volatile unsigned char *)0x49800034)	//Byte Read Count Register
#define rBWCR       (*(volatile unsigned char *)0x49800038)	//Byte Write Count Register
#define rMPR        (*(volatile unsigned char *)0x4980003C)	//Max Packet Register
#define rDCR        (*(volatile unsigned char *)0x49800040)	//DMA Control Register
#define rDTCR       (*(volatile unsigned char *)0x49800044)	//DMA Transfer Counter Register
#define rDFCR       (*(volatile unsigned char *)0x49800048)	//DMA FIFO Counter Register
#define rDTTCR1     (*(volatile unsigned char *)0x4980004C)	//DMA Total Transfer Counter1 Register
#define rDTTCR2     (*(volatile unsigned char *)0x49800050)	//DMA Total Transfer Counter2 Register
#define rMICR      	(*(volatile unsigned char *)0x49800054)	//Master Interface Control Register
#define rMBAR     	(*(volatile unsigned char *)0x49800088)	//Memory Base Address Register
#define rMCAR     	(*(volatile unsigned char *)0x4980008C)  //Memory Current Address Register


// chapter18 IIC - cha
#define rIICCON		(*(volatile unsigned *)0x54000000)	//IIC control
#define rIICSTAT	(*(volatile unsigned *)0x54000004)	//IIC control/status
#define rIICADD		(*(volatile unsigned *)0x54000008)	//IIC address
#define rIICDS		(*(volatile unsigned *)0x5400000c)	//IIC transmit/receive data shift
#define rIICLC		(*(volatile unsigned *)0x54000010)	//IIC-Bus multi-master line control register

#define rIICCON1	(*(volatile unsigned *)0x54000100)	//IIC control
#define rIICSTAT1	(*(volatile unsigned *)0x54000104)	//IIC control/status
#define rIICADD1	(*(volatile unsigned *)0x54000108)	//IIC address
#define rIICDS1		(*(volatile unsigned *)0x5400010c)	//IIC transmit/receive data shift
#define rIICLC1		(*(volatile unsigned *)0x54000110)	//IIC-Bus multi-master line control register


// chapter19 2D - jcs 


#define G2D_BASE_TEMP			0x4D408000 //temporarily used for the IP verfication of 2D v2.0

#define	rG2D_CONTROL        		 (*(volatile unsigned *)(G2D_BASE_TEMP+0x00))
#define	rG2D_INTEN          		 (*(volatile unsigned *)(G2D_BASE_TEMP+0x04))
#define	rG2D_FIFO_INTC      		 (*(volatile unsigned *)(G2D_BASE_TEMP+0x08))
#define	rG2D_INTC_PEND				 (*(volatile unsigned *)(G2D_BASE_TEMP+0x0c))
#define	rG2D_FIFO_STAT       		 (*(volatile unsigned *)(G2D_BASE_TEMP+0x10))

#define	rG2D_CMDR0                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x100))
#define	rG2D_CMDR1                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x104))
#define	rG2D_CMDR2                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x108))
#define	rG2D_CMDR3                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x10c))
#define	rG2D_CMDR4                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x110))
#define	rG2D_CMDR5                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x114))
#define	rG2D_CMDR6                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x118))	//Reserved
#define	rG2D_CMDR7                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x11c))


#define	rG2D_SRC_RES				(*(volatile unsigned *)(G2D_BASE_TEMP+0x200))
#define	rG2D_SRC_HORI_RES			(*(volatile unsigned *)(G2D_BASE_TEMP+0x204))
#define	rG2D_SRC_VERT_RES			(*(volatile unsigned *)(G2D_BASE_TEMP+0x208))

#define	rG2D_SC_RES					(*(volatile unsigned *)(G2D_BASE_TEMP+0x210))		//SC_RES_REG
#define	rG2D_SC_HORI_RES			(*(volatile unsigned *)(G2D_BASE_TEMP+0x214))		//SC_HORI_RES _REG
#define	rG2D_SC_VERT_RES			(*(volatile unsigned *)(G2D_BASE_TEMP+0x218)) 	//SC_VERT_RES _REG

//----------
#define	rG2D_CW_LT					(*(volatile unsigned *)(G2D_BASE_TEMP+0x220))
#define	rG2D_CW_LT_X	    	   	(*(volatile unsigned *)(G2D_BASE_TEMP+0x224))
#define	rG2D_CW_LT_Y   		    	(*(volatile unsigned *)(G2D_BASE_TEMP+0x228))
#define	rG2D_CW_RB   		    	(*(volatile unsigned *)(G2D_BASE_TEMP+0x230))
#define	rG2D_CW_RB_X   				(*(volatile unsigned *)(G2D_BASE_TEMP+0x234))
#define	rG2D_CW_RB_Y   				(*(volatile unsigned *)(G2D_BASE_TEMP+0x238))

#define	rG2D_COORD0              	(*(volatile unsigned *)(G2D_BASE_TEMP+0x300))
#define	rG2D_COORD0_X               (*(volatile unsigned *)(G2D_BASE_TEMP+0x304))
#define	rG2D_COORD0_Y               (*(volatile unsigned *)(G2D_BASE_TEMP+0x308))
#define	rG2D_COORD1              	(*(volatile unsigned *)(G2D_BASE_TEMP+0x310))
#define	rG2D_COORD1_X               (*(volatile unsigned *)(G2D_BASE_TEMP+0x314))
#define	rG2D_COORD1_Y               (*(volatile unsigned *)(G2D_BASE_TEMP+0x318))
#define	rG2D_COORD2              	(*(volatile unsigned *)(G2D_BASE_TEMP+0x320))
#define	rG2D_COORD2_X               (*(volatile unsigned *)(G2D_BASE_TEMP+0x324))
#define	rG2D_COORD2_Y               (*(volatile unsigned *)(G2D_BASE_TEMP+0x328))
#define	rG2D_COORD3              	(*(volatile unsigned *)(G2D_BASE_TEMP+0x330))
#define	rG2D_COORD3_X               (*(volatile unsigned *)(G2D_BASE_TEMP+0x334))
#define	rG2D_COORD3_Y               (*(volatile unsigned *)(G2D_BASE_TEMP+0x338))

#define	rG2D_ROT_OC              	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x340))
#define	rG2D_ROT_OC_X                (*(volatile unsigned *)(G2D_BASE_TEMP+0x344))
#define	rG2D_ROT_OC_Y                (*(volatile unsigned *)(G2D_BASE_TEMP+0x348))
#define	rG2D_ROTATE             	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x34c))

#define	rG2D_ENDIAN    			 	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x350))

#define	rG2D_X_INCR                  (*(volatile unsigned *)(G2D_BASE_TEMP+0x400))
#define	rG2D_Y_INCR                  (*(volatile unsigned *)(G2D_BASE_TEMP+0x404))

#define	rG2D_ROP                 	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x410))
#define	rG2D_ALPHA                   (*(volatile unsigned *)(G2D_BASE_TEMP+0x420))

#define	rG2D_FG_COLOR                (*(volatile unsigned *)(G2D_BASE_TEMP+0x500))
#define	rG2D_BG_COLOR                (*(volatile unsigned *)(G2D_BASE_TEMP+0x504))
#define	rG2D_BS_COLOR                (*(volatile unsigned *)(G2D_BASE_TEMP+0x508))


#define	rG2D_SRC_COLOR_MODE          (*(volatile unsigned *)(G2D_BASE_TEMP+0x510))
#define	rG2D_DEST_COLOR_MODE         (*(volatile unsigned *)(G2D_BASE_TEMP+0x514))

#define	rG2D_PATTERN_ADDR            (*(volatile unsigned *)(G2D_BASE_TEMP+0x600))
#define	rG2D_PATOFF		          	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x700))
#define	rG2D_PATOFF_X                (*(volatile unsigned *)(G2D_BASE_TEMP+0x704))
#define	rG2D_PATOFF_Y                (*(volatile unsigned *)(G2D_BASE_TEMP+0x708))                                      																																								
#define	rG2D_COLORKEY_CNTL           (*(volatile unsigned *)(G2D_BASE_TEMP+0x720))	//STENCIL_CNTL_REG	
#define	rG2D_COLORKEY_DR_MIN         (*(volatile unsigned *)(G2D_BASE_TEMP+0x724))	//STENCIL_DR_MIN_REG
#define	rG2D_COLORKEY_DR_MAX         (*(volatile unsigned *)(G2D_BASE_TEMP+0x728))	//STENCIL_DR_MAX_REG


#define	rG2D_SRC_BASE_ADDR           (*(volatile unsigned *)(G2D_BASE_TEMP+0x730))
#define	rG2D_DEST_BASE_ADDR       	 (*(volatile unsigned *)(G2D_BASE_TEMP+0x734)) //mostly frame buffer address



// chapter19 SPI - cha   
#define rSPCON0			(*(volatile unsigned *)0x52000000)	//SPI0 control
#define rSPSTA0			(*(volatile unsigned *)0x52000004)	//SPI0 status
#define rSPPIN0			(*(volatile unsigned *)0x52000008)	//SPI0 pin control
#define rSPPRE0			(*(volatile unsigned *)0x5200000c)	//SPI0 baud rate prescaler
#define rSPTDAT0		(*(volatile unsigned *)0x52000010)	//SPI0 Tx data
#define rSPRDAT0		(*(volatile unsigned *)0x52000014)	//SPI0 Rx data
#define rSPCON1			(*(volatile unsigned *)0x59000000)	//SPI1 control
#define rSPSTA1			(*(volatile unsigned *)0x59000004)	//SPI1 status
#define rSPPIN1			(*(volatile unsigned *)0x59000008)	//SPI1 pin control
#define rSPPRE1			(*(volatile unsigned *)0x5900000c)	//SPI1 baud rate prescaler
#define rSPTDAT1		(*(volatile unsigned *)0x59000000)	//SPI1 Tx data
#define rSPRDAT1		(*(volatile unsigned *)0x59000004)	//SPI1 Rx data// chapter20 HS_SPI Interface - gom


// chapter20 HS_SPI - gom
#define rCH_CFG  		(*(volatile unsigned *)0x52000000)	//SPI configuration
#define rCLK_CFG  		(*(volatile unsigned *)0x52000004)	//Clock configuration
#define rMODE_CFG  		(*(volatile unsigned *)0x52000008)	//SPI FIFO control
#define rSLAVE_SEL  	(*(volatile unsigned *)0x5200000C)	//Slave selection
#define rSPI_INT_EN  	(*(volatile unsigned *)0x52000010)	//SPI interrupt enable
#define rSPI_STATUS  	(*(volatile unsigned *)0x52000014)	//SPI status
#define rSPI_TX_DATA  	(*(volatile unsigned *)0x52000018)	//SPI TX data
#define rSPI_RX_DATA  	(*(volatile unsigned *)0x5200001C)	//SPI RX data
#define rPACKET_CNT  	(*(volatile unsigned *)0x52000020)	//count how many data master gets
#define rPENDING_CLR  	(*(volatile unsigned *)0x52000024)	//Pending clear
#define SPI_TX_DATA  	0x52000018	//SPI TX data
#define SPI_RX_DATA  	0x5200001C	//SPI RX data

// chapter21 TFT LCD CONTROLLER - oh
#define rVIDCON0		(*(volatile unsigned *)0x4c800000)	//VIDEO CONTROL REGTISTER 0
#define rVIDCON1		(*(volatile unsigned *)0x4c800004)	//VIDEO CONTROL REGTISTER 1
#define rVIDTCON0		(*(volatile unsigned *)0x4c800008)	//VIDEO CONTROL REGTISTER 0
#define rVIDTCON1		(*(volatile unsigned *)0x4c80000C)	//VIDEO TIME CONTROL REGTISTER 1
#define rVIDTCON2		(*(volatile unsigned *)0x4c800010)	//VIDEO TIME CONTROL REGTISTER 2
#define rWINCON0		(*(volatile unsigned *)0x4c800014)	//WINDOW CONTROL REGTISTER 0
#define rWINCON1		(*(volatile unsigned *)0x4c800018)	//WINDOW CONTROL REGTISTER 1
#define rVIDOSD0A		(*(volatile unsigned *)0x4c800028)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD0B		(*(volatile unsigned *)0x4c80002C)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD0C		(*(volatile unsigned *)0x4c800030)	//VIDEO WIDOW 0'S POSITION CONTROL REGTISTER 
#define rVIDOSD1A		(*(volatile unsigned *)0x4c800034)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDOSD1B		(*(volatile unsigned *)0x4c800038)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDOSD1C		(*(volatile unsigned *)0x4c80003C)	//VIDEO WIDOW 1'S POSITION CONTROL REGTISTER 
#define rVIDW00ADD0B0	(*(volatile unsigned *)0x4c800064)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD0B1	(*(volatile unsigned *)0x4c800068)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD0		(*(volatile unsigned *)0x4c80006C)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDW00ADD1B0	(*(volatile unsigned *)0x4c80007C)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD1B1	(*(volatile unsigned *)0x4c800080)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD1		(*(volatile unsigned *)0x4c800084)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDW00ADD2B0	(*(volatile unsigned *)0x4c800094)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW00ADD2B1	(*(volatile unsigned *)0x4c800098)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD2		(*(volatile unsigned *)0x4c80009C)	//WIDOW 1'S BUFFER START ADDR,
#define rVIDINTCON		(*(volatile unsigned *)0x4c8000AC)	//INDICATE THE VIDEO INTER. CONTROL
#define rW1KEYCON0		(*(volatile unsigned *)0x4c8000B0)	//COLOR KEY CONTROL REG.
#define rW1KEYCON1		(*(volatile unsigned *)0x4c8000B4)	//COLOR KEY CONTROL REG.
#define rW2KEYCON0		(*(volatile unsigned *)0x4c8000B8)	//COLOR KEY CONTROL REG.
#define rW2KEYCON1		(*(volatile unsigned *)0x4c8000BC)	//COLOR KEY CONTROL REG.
#define rW3KEYCON0		(*(volatile unsigned *)0x4c8000C0)	//COLOR KEY CONTROL REG.
#define rW3KEYCON1		(*(volatile unsigned *)0x4c8000C4)	//COLOR KEY CONTROL REG.
#define rW4KEYCON0		(*(volatile unsigned *)0x4c8000C8)	//COLOR KEY CONTROL REG.
#define rW4KEYCON1		(*(volatile unsigned *)0x4c8000CC)	//COLOR KEY CONTROL REG.
#define rWIN0MAP		(*(volatile unsigned *)0x4c8000D0)	//WINDOW COLOR CONTROL
#define rWIN1MAP		(*(volatile unsigned *)0x4c8000D4)	//WINDOW COLOR CONTROL
#define rWPALCON		(*(volatile unsigned *)0x4c8000E4)	//WINDOW PALLETTE CONTROL
#define rSYSIFCON0		(*(volatile unsigned *)0x4c800130)	//SYSTEM INTERFACE MAIN LDI
#define rSYSIFCON1		(*(volatile unsigned *)0x4c800134)	//SYSTEM INTERFACE SUB LDI
#define rDITHMODE1		(*(volatile unsigned *)0x4c800138)	//DITHERING MODE
#define rSIFCCON0		(*(volatile unsigned *)0x4c80013C)	//SYSTEM INTERFACE COMMAND CONTROL
#define rSIFCCON1		(*(volatile unsigned *)0x4c800140)	//SYSTEM IF COMMAND DATA WRITE CONTROL
#define rSIFCCON2		(*(volatile unsigned *)0x4c800144)	//SYSTEM IF COMMAND DATA READ CONTROL
#define rCPUTRIGCON1	(*(volatile unsigned *)0x4c80015C)	//CPU TRIGGER SOURCE MASK
#define rCPUTRIGCON2	(*(volatile unsigned *)0x4c800160)	//SOFTWARE BSED TRIGGER CONTROL
#define rVIDW00ADD0B1	(*(volatile unsigned *)0x4c800068)	//WIDOW 0'S BUFFER START ADDR,
#define rVIDW01ADD0		(*(volatile unsigned *)0x4c80006C)	//WIDOW 1'S BUFFER START ADDR,

#define WIN0_PALETTE_START		(0x4c800400)
#define WIN1_PALETTE_START		(0x4c800800)


// chapter22 CSTN CONTROLLER - oh
#define rLCDCON1    	(*(volatile unsigned *)0x4d000000)	//LCD control 1
#define rLCDCON2    	(*(volatile unsigned *)0x4d000004)	//LCD control 2
#define rLCDCON3    	(*(volatile unsigned *)0x4d000008)	//LCD control 3
#define rLCDCON4    	(*(volatile unsigned *)0x4d00000c)	//LCD control 4
#define rLCDCON5    	(*(volatile unsigned *)0x4d000010)	//LCD control 5
#define rLCDSADDR1  	(*(volatile unsigned *)0x4d000014)	//STN/TFT Frame buffer start address 1
#define rLCDSADDR2  	(*(volatile unsigned *)0x4d000018)	//STN/TFT Frame buffer start address 2
#define rLCDSADDR3  	(*(volatile unsigned *)0x4d00001c)	//STN/TFT Virtual screen address set
#define rREDLUT     	(*(volatile unsigned *)0x4d000020)	//STN : RED LOOKUP TABLE REGISTER
#define rGREENLUT   	(*(volatile unsigned *)0x4d000024)	//STN Green lookup table 
#define rBLUELUT    	(*(volatile unsigned *)0x4d000028)	//STN Blue lookup table
#define rDITHMODE   	(*(volatile unsigned *)0x4d00004c)	//STN Dithering mode
#define rLCDINTPND  	(*(volatile unsigned *)0x4d000024)	//LCD Interrupt pending
#define rLCDSRCPND  	(*(volatile unsigned *)0x4d000028)	//LCD Interrupt source
#define rLCDINTMSK  	(*(volatile unsigned *)0x4d00002c)	//LCD Interrupt mask


// chapter23 Camera Interface - jcs
#define rCISRCFMT		(*(volatile unsigned *)0x4D800000) //Input Source Format        
#define rCIWDOFST		(*(volatile unsigned *)0x4D800004) //Window offset       
#define rCIGCTRL		(*(volatile unsigned *)0x4D800008) //Global control        
#define rCIDOWSFT2		(*(volatile unsigned *)0x4D800014) //Window option 2
#define rCICOYSA1		(*(volatile unsigned *)0x4D800018) //Y1 frame start address for codec DMA      
#define rCICOYSA2		(*(volatile unsigned *)0x4D80001C) //Y2 frame start address for codec DMA       
#define rCICOYSA3		(*(volatile unsigned *)0x4D800020) //Y3 frame start address for codec DMA        
#define rCICOYSA4		(*(volatile unsigned *)0x4D800024) //Y4 frame start address for codec DMA          
#define rCICOCBSA1		(*(volatile unsigned *)0x4D800028) //Cb1 frame start address for codec DMA 
#define rCICOCBSA2		(*(volatile unsigned *)0x4D80002C) //Cb2 frame start address for codec DMA        
#define rCICOCBSA3		(*(volatile unsigned *)0x4D800030) //Cb3 frame start address for codec DMA           
#define rCICOCBSA4		(*(volatile unsigned *)0x4D800034) //Cb4 frame start address for codec DMA   
#define rCICOCRSA1		(*(volatile unsigned *)0x4D800038) //Cr1 frame start address for codec DMA
#define rCICOCRSA2		(*(volatile unsigned *)0x4D80003C) //Cr2 frame start address for codec DMA
#define rCICOCRSA3		(*(volatile unsigned *)0x4D800040) //Cr3 frame start address for codec DMA
#define rCICOCRSA4		(*(volatile unsigned *)0x4D800044) //Cr4 frame start address for codec DMA
#define rCICOTRGFMT		(*(volatile unsigned *)0x4D800048) //Target image format of codex DMA
#define rCICOCTRL		(*(volatile unsigned *)0x4D80004C) //Codec DMA comtrol        
#define rCICOSCPRERATIO	(*(volatile unsigned *)0x4D800050) //Codec pre-scaler ratio control      
#define rCICOSCPREDST	(*(volatile unsigned *)0x4D800054) //Codec pre-scaler desitination format
#define rCICOSCCTRL		(*(volatile unsigned *)0x4D800058) //Codec main-scaler control
#define rCICOTAREA		(*(volatile unsigned *)0x4D80005C) //Codec pre-scaler desination format
#define rCICOSTATUS		(*(volatile unsigned *)0x4D800064) //Codec path status
#define rCIPRCLRSA1		(*(volatile unsigned *)0x4D80006C) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA2		(*(volatile unsigned *)0x4D800070) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA3		(*(volatile unsigned *)0x4D800074) //RGB 1st frame start address for preview DMA
#define rCIPRCLRSA4		(*(volatile unsigned *)0x4D800078) //RGB 1st frame start address for preview DMA
#define rCIPRTRGFMT		(*(volatile unsigned *)0x4D80007C) //Target image format of Preview DMA
#define rCIPRCTRL		(*(volatile unsigned *)0x4D800080) //Codec DMA comtrol        
#define rCIPRSCPRERATIO	(*(volatile unsigned *)0x4D800084) //Codec pre-scaler ratio control      
#define rCIPRSCPREDST	(*(volatile unsigned *)0x4D800088) //Codec pre-scaler desitination format
#define rCIPRSCCTRL		(*(volatile unsigned *)0x4D80008C) //Codec main-scaler control
#define rCIPRTAREA		(*(volatile unsigned *)0x4D800090) //Codec pre-scaler desination format
#define rCIPRSTATUS		(*(volatile unsigned *)0x4D800098) //Codec path status
#define rCIIMGCPT		(*(volatile unsigned *)0x4D8000A0) //Imahe capture enable command
#define rCICOCPTSEQ		(*(volatile unsigned *)0x4D8000A4) //Codec dma capture sequence related
#define rCICOSCOS		(*(volatile unsigned *)0x4D8000A8) //Codec scan line offset related
#define rCIPRSCOS		(*(volatile unsigned *)0x4D8000Ac) //Preview scan line offset related
#define rCIIMGEFF		(*(volatile unsigned *)0x4D8000B0) //Imahe Effects related
#define rCIMSYSA		(*(volatile unsigned *)0x4D8000B4) //MSDMA Y start address related
#define rCIMSCBSA		(*(volatile unsigned *)0x4D8000B8) //MSDMA Cb start address related
#define rCIMSCRSA		(*(volatile unsigned *)0x4D8000BC) //MSDMA Cr start address related
#define rCIMSYEND		(*(volatile unsigned *)0x4D8000C0) //MSDMA Y end address related
#define rCIMSCBEND		(*(volatile unsigned *)0x4D8000C4) //MSDMA Cb end address related
#define rCIMSCREND		(*(volatile unsigned *)0x4D8000C8) //MSDMA Cr end address related
#define rCIMSYOFF		(*(volatile unsigned *)0x4D8000CC) //MSDMA Y offset related
#define rCIMSCBOFF		(*(volatile unsigned *)0x4D8000D0) //MSDMA Cb offset related
#define rCIMSCROFF		(*(volatile unsigned *)0x4D8000D4) //MSDMA Cr offset related
#define rCIMSWIDTH		(*(volatile unsigned *)0x4D8000D8) //MSDMA source image width related
#define rCIMSCTRL		(*(volatile unsigned *)0x4D8000DC) //MSDMA cotrol


// chapter24 ADC - gom
#define rADCCON			(*(volatile unsigned *)0x58000000)	//ADC control
#define rADCTSC			(*(volatile unsigned *)0x58000004)	//ADC touch screen control
#define rADCDLY			(*(volatile unsigned *)0x58000008)	//ADC start or Interval Delay
#define rADCDAT0		(*(volatile unsigned *)0x5800000c)	//ADC conversion data 0
#define rADCDAT1		(*(volatile unsigned *)0x58000010)	//ADC conversion data 1
#define rADCUPDN		(*(volatile unsigned *)0x58000014)	//Stylus Up/Down interrupt status
#define rADCMUX			(*(volatile unsigned *)0x58000018)	//Stylus Up/Down interrupt status


// chapter26 IIS Multi Audio interface(address is compatible with 2443)- dongjin
#define rIISCON  		(*(volatile unsigned *)0x55000000)	//IIS Control
#define rIISMOD  		(*(volatile unsigned *)0x55000004)	//IIS Mode
#define rIISFIC  		(*(volatile unsigned *)0x55000008)	//IIS FIFO control
#define rIISPSR  		(*(volatile unsigned *)0x5500000c)	//IIS clock divider control
#define rIISTXD  		(*(volatile unsigned *)0x55000010)	//IIS tracsmit data
#define rIISRXD  		(*(volatile unsigned *)0x55000014)	//IIS recelve data

#define rIISCON0  		(*(volatile unsigned *)0x55000000)	//IIS Control
#define rIISMOD0  		(*(volatile unsigned *)0x55000004)	//IIS Mode
#define rIISFIC0  		(*(volatile unsigned *)0x55000008)	//IIS FIFO control
#define rIISPSR0  		(*(volatile unsigned *)0x5500000c)	//IIS clock divider control
#define rIISTXD0  		(*(volatile unsigned *)0x55000010)	//IIS tracsmit data
#define rIISRXD0  		(*(volatile unsigned *)0x55000014)	//IIS recelve data

// chapter25 IIS(added)- dongjin
#define rIISCON1  		(*(volatile unsigned *)0x55000100)	//IIS Control
#define rIISMOD1  		(*(volatile unsigned *)0x55000104)	//IIS Mode
#define rIISFIC1  		(*(volatile unsigned *)0x55000108)	//IIS FIFO control
#define rIISPSR1  		(*(volatile unsigned *)0x5500010c)	//IIS clock divider control
#define rIISTXD1  		(*(volatile unsigned *)0x55000110)	//IIS tracsmit data
#define rIISRXD1  		(*(volatile unsigned *)0x55000114)	//IIS recelve data


// chpater26 AC97 - junon
#define	rAC_GLBCTRL		(*(volatile unsigned *)0x5B000000)
#define	rAC_GLBSTAT		(*(volatile unsigned *)0x5B000004)
#define	rAC_CODEC_CMD	(*(volatile unsigned *)0x5B000008)
#define	rAC_CODEC_STAT	(*(volatile unsigned *)0x5B00000C)
#define	rAC_PCMADDR		(*(volatile unsigned *)0x5B000010) // edited by junon
#define	rAC_MICADDR		(*(volatile unsigned *)0x5B000014)
#define	rAC_PCMDATA		(*(volatile unsigned *)0x5B000018)
#define	rAC_MICDATA		(*(volatile unsigned *)0x5B00001C)

#ifndef		__S3C2450
// chapter27 SD Interface - gom
#define rSDICON     	(*(volatile unsigned *)0x5a000000)	//SDI control
#define rSDIPRE    	 	(*(volatile unsigned *)0x5a000004)	//SDI baud rate prescaler
#define rSDICARG    	(*(volatile unsigned *)0x5a000008)	//SDI command argument
#define rSDICCON    	(*(volatile unsigned *)0x5a00000c)	//SDI command control
#define rSDICSTA    	(*(volatile unsigned *)0x5a000010)	//SDI command status
#define rSDIRSP0    	(*(volatile unsigned *)0x5a000014)	//SDI response 0
#define rSDIRSP1    	(*(volatile unsigned *)0x5a000018)	//SDI response 1
#define rSDIRSP2    	(*(volatile unsigned *)0x5a00001c)	//SDI response 2
#define rSDIRSP3    	(*(volatile unsigned *)0x5a000020)	//SDI response 3
#define rSDIDTIMER  	(*(volatile unsigned *)0x5a000024)	//SDI data/busy timer
#define rSDIBSIZE   	(*(volatile unsigned *)0x5a000028)	//SDI block size
#define rSDIDCON    	(*(volatile unsigned *)0x5a00002c)	//SDI data control
#define rSDIDCNT    	(*(volatile unsigned *)0x5a000030)	//SDI data remain counter
#define rSDIDSTA    	(*(volatile unsigned *)0x5a000034)	//SDI data status
#define rSDIFSTA    	(*(volatile unsigned *)0x5a000038)	//SDI FIFO status
#define rSDIIMSK    	(*(volatile unsigned *)0x5a00003c)	//SDI interrupt mask. edited for 2442A

#ifdef __BIG_ENDIAN  /* edited for 2442A */
#define rSDIDAT		(*(volatile unsigned *)0x5a00004c)	//SDI data
#define SDIDAT		0x5a00004c  

#else  // Little Endian
#define rSDIDAT		(*(volatile unsigned *)0x5a000040)	//SDI data 
#define SDIDAT		0x5a000040  
#endif

#endif

// chapter28 HS_MMC Interface - gom
#define rHM1_SYSAD      	(*(volatile unsigned *)0x4A800000)	//SDI control register
#define rHM1_BLKSIZE    	(*(volatile unsigned short*)0x4A800004)	//Host buffer boundary and transfer block size register
#define rHM1_BLKCNT	    (*(volatile unsigned short*)0x4A800006)	//Block count for current transfer
#define rHM1_ARGUMENT   	(*(volatile unsigned int*)0x4A800008)	//Command Argument
#define rHM1_TRNMOD	    (*(volatile unsigned short*)0x4A80000C)	//Transfer Mode setting register
#define rHM1_CMDREG	    (*(volatile unsigned short*)0x4A80000E)	//Command register
#define rHM1_RSPREG0    	(*(volatile unsigned int*)0x4A800010)	//Response 0
#define rHM1_RSPREG1    	(*(volatile unsigned int*)0x4A800014)	//Response 1
#define rHM1_RSPREG2    	(*(volatile unsigned int*)0x4A800018)	//Response 2
#define rHM1_RSPREG3    	(*(volatile unsigned int*)0x4A80001C)	//Response 3
#define rHM1_BDATA      	(*(volatile unsigned int*)0x4A800020)	//Buffer Data register
#define rHM1_PRNSTS     	(*(volatile unsigned int*)0x4A800024)	//Present state
#define rHM1_HOSTCTL    	(*(volatile unsigned char*)0x4A800028)	//Host control
#define rHM1_PWRCON     	(*(volatile unsigned char*)0x4A800029)	//Power control
#define rHM1_BLKGAP     	(*(volatile unsigned char*)0x4A80002A)	//Block Gap control
#define rHM1_WAKCON     	(*(volatile unsigned char*)0x4A80002B)	//Wakeup control
#define rHM1_CLKCON     	(*(volatile unsigned short*)0x4A80002C)	//Clock control
#define rHM1_TIMEOUTCON  (*(volatile unsigned char*)0x4A80002E)	//Time out control
#define rHM1_SWRST      	(*(volatile unsigned char*)0x4A80002F)	//Software reset
#define rHM1_NORINTSTS  	(*(volatile unsigned short*)0x4A800030)	//Normal interrupt status
#define rHM1_ERRINTSTS  	(*(volatile unsigned short*)0x4A800032)	//Error interrupt status
#define rHM1_NORINTSTSEN (*(volatile unsigned short*)0x4A800034)	//Normal interrupt status enable
#define rHM1_ERRINTSTSEN (*(volatile unsigned short*)0x4A800036)	//Error interrupt status enable
#define rHM1_NORINTSIGEN (*(volatile unsigned short*)0x4A800038)	//Normal interrupt signal enable
#define rHM1_ERRINTSIGEN (*(volatile unsigned short*)0x4A80003A)	//Error interrupt signal enable
#define rHM1_ACMD12ERRSTS (*(volatile unsigned short*)0x4A80003C)	//Auto CMD12 Error Status
#define rHM1_CAPAREG  	(*(volatile unsigned int*)0x4A800040)	//Capability
#define rHM1_MAXCURR  	(*(volatile unsigned int*)0x4A800048)	//Maximum current Capability
#define rHM1_CONTROL2  	(*(volatile unsigned int*)0x4A800080)	//Control 2
#define rHM1_CONTROL3  	(*(volatile unsigned int*)0x4A800084)	//Control 3
#define rHM1_HCVER  		(*(volatile unsigned short*)0x4A8000FE)	//Host controller version

#define rHM1_DEBUG  		(*(volatile unsigned int*)0x4A800088)
#define rHM1_CONTROL4  	(*(volatile unsigned int*)0x4A80008C)
#define rHM1_FEAER  		(*(volatile unsigned short*)0x4A800050)
#define rHM1_FEERR  		(*(volatile unsigned short*)0x4A800052)
#define rHM1_ADMAERR  	(*(volatile unsigned int*)0x4A800054)
#define rHM1_ADMSYSADDR  	(*(volatile unsigned int*)0x4A800058)

#define rHM0_SYSAD      	(*(volatile unsigned *)0x4AC00000)		//SDI control register
#define rHM0_BLKSIZE    	(*(volatile unsigned short*)0x4AC00004)	//Host buffer boundary and transfer block size register
#define rHM0_BLKCNT	    (*(volatile unsigned short*)0x4AC00006)		//Block count for current transfer
#define rHM0_ARGUMENT   	(*(volatile unsigned int*)0x4AC00008)		//Command Argument
#define rHM0_TRNMOD	    (*(volatile unsigned short*)0x4AC0000C)		//Transfer Mode setting register
#define rHM0_CMDREG	    (*(volatile unsigned short*)0x4AC0000E)		//Command register
#define rHM0_RSPREG0    	(*(volatile unsigned int*)0x4AC00010)		//Response 0
#define rHM0_RSPREG1    	(*(volatile unsigned int*)0x4AC00014)		//Response 1
#define rHM0_RSPREG2    	(*(volatile unsigned int*)0x4AC00018)	//Response 2
#define rHM0_RSPREG3    	(*(volatile unsigned int*)0x4AC0001C)	//Response 3
#define rHM0_BDATA      	(*(volatile unsigned int*)0x4AC00020)	//Buffer Data register
#define rHM0_PRNSTS     	(*(volatile unsigned int*)0x4AC00024)	//Present state
#define rHM0_HOSTCTL    	(*(volatile unsigned char*)0x4AC00028)	//Host control
#define rHM0_PWRCON     	(*(volatile unsigned char*)0x4AC00029)	//Power control
#define rHM0_BLKGAP     	(*(volatile unsigned char*)0x4AC0002A)	//Block Gap control
#define rHM0_WAKCON     	(*(volatile unsigned char*)0x4AC0002B)	//Wakeup control
#define rHM0_CLKCON     	(*(volatile unsigned short*)0x4AC0002C)	//Clock control
#define rHM0_TIMEOUTCON  (*(volatile unsigned char*)0x4AC0002E)	//Time out control
#define rHM0_SWRST      	(*(volatile unsigned char*)0x4AC0002F)	//Software reset
#define rHM0_NORINTSTS  	(*(volatile unsigned short*)0x4AC00030)	//Normal interrupt status
#define rHM0_ERRINTSTS  	(*(volatile unsigned short*)0x4AC00032)	//Error interrupt status
#define rHM0_NORINTSTSEN (*(volatile unsigned short*)0x4AC00034)	//Normal interrupt status enable
#define rHM0_ERRINTSTSEN (*(volatile unsigned short*)0x4AC00036)	//Error interrupt status enable
#define rHM0_NORINTSIGEN (*(volatile unsigned short*)0x4AC00038)	//Normal interrupt signal enable
#define rHM0_ERRINTSIGEN (*(volatile unsigned short*)0x4AC0003A)	//Error interrupt signal enable
#define rHM0_ACMD12ERRSTS (*(volatile unsigned short*)0x4AC0003C)	//Auto CMD12 Error Status
#define rHM0_CAPAREG  	(*(volatile unsigned int*)0x4AC00040)	//Capability
#define rHM0_MAXCURR  	(*(volatile unsigned int*)0x4AC00048)	//Maximum current Capability
#define rHM0_CONTROL2  	(*(volatile unsigned int*)0x4AC00080)	//Control 2
#define rHM0_CONTROL3  	(*(volatile unsigned int*)0x4AC00084)	//Control 3
#define rHM0_HCVER  		(*(volatile unsigned short*)0x4AC000FE)	//Host controller version

#define rHM0_DEBUG  		(*(volatile unsigned int*)0x4AC00088)
#define rHM0_CONTROL4  		(*(volatile unsigned int*)0x4AC0008C)
#define rHM0_FEAER  		(*(volatile unsigned short*)0x4AC00050)
#define rHM0_FEERR  		(*(volatile unsigned short*)0x4AC00052)
#define rHM0_ADMAERR  		(*(volatile unsigned int*)0x4AC00054)
#define rHM0_ADMSYSADDR  	(*(volatile unsigned int*)0x4AC00058)

// chapter28 PCM - dongjin
#define rPCM_CTL0 		(*(volatile unsigned *)0x5c000000)	//PCM0 Main Control
#define rPCM_CLKCTL0 	(*(volatile unsigned *)0x5c000004)	//PCM0 Clock and Shift control
#define rPCM_TXFIFO0 	(*(volatile unsigned *)0x5c000008)	//PCM0 TxFIFO write port
#define rPCM_RXFIFO0 	(*(volatile unsigned *)0x5c00000C)	//PCM0 RxFIFO read port
#define rPCM_IRQ_CTL0 	(*(volatile unsigned *)0x5c000010)	//PCM0 Interrupt Control
#define rPCM_IRQ_STAT0 	(*(volatile unsigned *)0x5c000014)	//PCM0 Interrupt Status
#define rPCM_FIFO_STAT0 (*(volatile unsigned *)0x5c000018)	//PCM0 Tx Default Value
#define rPCM_CLRINT0	(*(volatile unsigned *)0x5c000020)	//PCM0 Interrupt Clear

#define rPCM_CTL1 		(*(volatile unsigned *)0x5c000100)	//PCM1 Main Control
#define rPCM_CLKCTL1 	(*(volatile unsigned *)0x5c000104)	//PCM1 Clock and Shift control
#define rPCM_TXFIFO1 	(*(volatile unsigned *)0x5c000108)	//PCM1 TxFIFO write port
#define rPCM_RXFIFO1 	(*(volatile unsigned *)0x5c00010C)	//PCM1 RxFIFO read port
#define rPCM_IRQ_CTL1 	(*(volatile unsigned *)0x5c000110)	//PCM1 Interrupt Control
#define rPCM_IRQ_STAT1 	(*(volatile unsigned *)0x5c000114)	//PCM1 Interrupt Status
#define rPCM_FIFO_STAT1 (*(volatile unsigned *)0x5c000118)	//PCM1 Tx Default Value
#define rPCM_CLRINT1	(*(volatile unsigned *)0x5c000120)	//PCM1 Interrupt Clear

// chapter29 HS_MMC Interface - gom
#define rHM_SYSAD      	(*(volatile unsigned *)0x4A800000)	//SDI control register
#define rHM_BLKSIZE    	(*(volatile unsigned short*)0x4A800004)	//Host buffer boundary and transfer block size register
#define rHM_BLKCNT	    (*(volatile unsigned short*)0x4A800006)	//Block count for current transfer
#define rHM_ARGUMENT   	(*(volatile unsigned int*)0x4A800008)	//Command Argument
#define rHM_TRNMOD	    (*(volatile unsigned short*)0x4A80000C)	//Transfer Mode setting register
#define rHM_CMDREG	    (*(volatile unsigned short*)0x4A80000E)	//Command register
#define rHM_RSPREG0    	(*(volatile unsigned int*)0x4A800010)	//Response 0
#define rHM_RSPREG1    	(*(volatile unsigned int*)0x4A800014)	//Response 1
#define rHM_RSPREG2    	(*(volatile unsigned int*)0x4A800018)	//Response 2
#define rHM_RSPREG3    	(*(volatile unsigned int*)0x4A80001C)	//Response 3
#define rHM_BDATA      	(*(volatile unsigned int*)0x4A800020)	//Buffer Data register
#define rHM_PRNSTS     	(*(volatile unsigned int*)0x4A800024)	//Present state
#define rHM_HOSTCTL    	(*(volatile unsigned char*)0x4A800028)	//Host control
#define rHM_PWRCON     	(*(volatile unsigned char*)0x4A800029)	//Power control
#define rHM_BLKGAP     	(*(volatile unsigned char*)0x4A80002A)	//Block Gap control
#define rHM_WAKCON     	(*(volatile unsigned char*)0x4A80002B)	//Wakeup control
#define rHM_CLKCON     	(*(volatile unsigned short*)0x4A80002C)	//Clock control
#define rHM_TIMEOUTCON  (*(volatile unsigned char*)0x4A80002E)	//Time out control
#define rHM_SWRST      	(*(volatile unsigned char*)0x4A80002F)	//Software reset
#define rHM_NORINTSTS  	(*(volatile unsigned short*)0x4A800030)	//Normal interrupt status
#define rHM_ERRINTSTS  	(*(volatile unsigned short*)0x4A800032)	//Error interrupt status
#define rHM_NORINTSTSEN (*(volatile unsigned short*)0x4A800034)	//Normal interrupt status enable
#define rHM_ERRINTSTSEN (*(volatile unsigned short*)0x4A800036)	//Error interrupt status enable
#define rHM_NORINTSIGEN (*(volatile unsigned short*)0x4A800038)	//Normal interrupt signal enable
#define rHM_ERRINTSIGEN (*(volatile unsigned short*)0x4A80003A)	//Error interrupt signal enable
#define rHM_ACMD12ERRSTS (*(volatile unsigned short*)0x4A80003C)	//Auto CMD12 Error Status
#define rHM_CAPAREG  	(*(volatile unsigned int*)0x4A800040)	//Capability
#define rHM_MAXCURR  	(*(volatile unsigned int*)0x4A800048)	//Maximum current Capability
#define rHM_CONTROL2  	(*(volatile unsigned int*)0x4A800080)	//Control 2
#define rHM_CONTROL3  	(*(volatile unsigned int*)0x4A800084)	//Control 3
#define rHM_HCVER  		(*(volatile unsigned short*)0x4A8000FE)	//Host controller version



#define _ISR_STARTADDRESS			0x33ff0000
// Exception vector
#define pISR_RESET     	(*(unsigned *)(_ISR_STARTADDRESS+0x0))
#define pISR_UNDEF     	(*(unsigned *)(_ISR_STARTADDRESS+0x4))
#define pISR_SWI       	(*(unsigned *)(_ISR_STARTADDRESS+0x8))
#define pISR_PABORT    	(*(unsigned *)(_ISR_STARTADDRESS+0xc))
#define pISR_DABORT    	(*(unsigned *)(_ISR_STARTADDRESS+0x10))
#define pISR_RESERVED  	(*(unsigned *)(_ISR_STARTADDRESS+0x14))
#define pISR_IRQ       	(*(unsigned *)(_ISR_STARTADDRESS+0x18))
#define pISR_FIQ       	(*(unsigned *)(_ISR_STARTADDRESS+0x1c))
// Interrupt vector
#define pISR_EINT0		(*(unsigned *)(_ISR_STARTADDRESS+0x20))
#define pISR_EINT1		(*(unsigned *)(_ISR_STARTADDRESS+0x24))
#define pISR_EINT2		(*(unsigned *)(_ISR_STARTADDRESS+0x28))
#define pISR_EINT3		(*(unsigned *)(_ISR_STARTADDRESS+0x2c))
#define pISR_EINT4_7	(*(unsigned *)(_ISR_STARTADDRESS+0x30))
#define pISR_EINT8_23	(*(unsigned *)(_ISR_STARTADDRESS+0x34))
#define pISR_CAM		(*(unsigned *)(_ISR_STARTADDRESS+0x38))		
#define pISR_BAT_FLT	(*(unsigned *)(_ISR_STARTADDRESS+0x3c))
#define pISR_TICK		(*(unsigned *)(_ISR_STARTADDRESS+0x40))
#define pISR_WDT_AC97	(*(unsigned *)(_ISR_STARTADDRESS+0x44))   
#define pISR_TIMER0	 	(*(unsigned *)(_ISR_STARTADDRESS+0x48))
#define pISR_TIMER1	 	(*(unsigned *)(_ISR_STARTADDRESS+0x4c))
#define pISR_TIMER2		(*(unsigned *)(_ISR_STARTADDRESS+0x50))
#define pISR_TIMER3		(*(unsigned *)(_ISR_STARTADDRESS+0x54))
#define pISR_TIMER4		(*(unsigned *)(_ISR_STARTADDRESS+0x58))
#define pISR_UART2		(*(unsigned *)(_ISR_STARTADDRESS+0x5c))
#define pISR_LCD		(*(unsigned *)(_ISR_STARTADDRESS+0x60))
#define pISR_DMA		(*(unsigned *)(_ISR_STARTADDRESS+0x64))		//changed at 2443
#define pISR_UART3		(*(unsigned *)(_ISR_STARTADDRESS+0x68))		//changed at 2443
#define pISR_CFCON		(*(unsigned *)(_ISR_STARTADDRESS+0x6c))		//changed at 2443
#define pISR_SDI_1		(*(unsigned *)(_ISR_STARTADDRESS+0x70))		//changed at 2443
#define pISR_SDI_0		(*(unsigned *)(_ISR_STARTADDRESS+0x74))		//changed at 2443
#define pISR_SPI0		(*(unsigned *)(_ISR_STARTADDRESS+0x78))		//changed at 2443
#define pISR_UART1		(*(unsigned *)(_ISR_STARTADDRESS+0x7c))
#define pISR_NFCON		(*(unsigned *)(_ISR_STARTADDRESS+0x80))		
#define pISR_USBD		(*(unsigned *)(_ISR_STARTADDRESS+0x84))
#define pISR_USBH		(*(unsigned *)(_ISR_STARTADDRESS+0x88))
#define pISR_IIC		(*(unsigned *)(_ISR_STARTADDRESS+0x8c))
#define pISR_UART0		(*(unsigned *)(_ISR_STARTADDRESS+0x90))
#define pISR_SPI1		(*(unsigned *)(_ISR_STARTADDRESS+0x94))		//changed at 2443
#define pISR_RTC		(*(unsigned *)(_ISR_STARTADDRESS+0x98))
#define pISR_ADC		(*(unsigned *)(_ISR_STARTADDRESS+0x9c))
#define pISR_2D			(*(unsigned *)(_ISR_STARTADDRESS+0xa0))
#define pISR_IIC1		(*(unsigned *)(_ISR_STARTADDRESS+0xa4))
#define pISR_ReservedIRQ0	(*(unsigned *)(_ISR_STARTADDRESS+0xa8))
#define pISR_ReservedIRQ1	(*(unsigned *)(_ISR_STARTADDRESS+0xaC))
#define pISR_PCM0		(*(unsigned *)(_ISR_STARTADDRESS+0xb0))
#define pISR_PCM1		(*(unsigned *)(_ISR_STARTADDRESS+0xb4))
#define pISR_I2S0		(*(unsigned *)(_ISR_STARTADDRESS+0xb8))
#define pISR_I2S1		(*(unsigned *)(_ISR_STARTADDRESS+0xbC))

// PENDING BIT
#define BIT_EINT0		(0x1)
#define BIT_EINT1		(0x1<<1)
#define BIT_EINT2		(0x1<<2)
#define BIT_EINT3		(0x1<<3)
#define BIT_EINT4_7		(0x1<<4)
#define BIT_EINT8_23	(0x1<<5)
#define BIT_CAM			(0x1<<6)		
#define BIT_BAT_FLT		(0x1<<7)
#define BIT_TICK		(0x1<<8)
#define BIT_WDT_AC97	(0x1<<9)	
#define BIT_TIMER0		(0x1<<10)
#define BIT_TIMER1		(0x1<<11)
#define BIT_TIMER2		(0x1<<12)
#define BIT_TIMER3		(0x1<<13)
#define BIT_TIMER4		(0x1<<14)
#define BIT_UART2		(0x1<<15)
#define BIT_LCD			(0x1<<16)
#define BIT_DMA			(0x1<<17)		//changed at 2443
#define BIT_UART3		(0x1<<18)		//changed at 2443
#define BIT_CFCON		(0x1<<19)		//changed at 2443
#define BIT_SDI1		(0x1<<20)		//changed at 2443
#define BIT_SDI0		(0x1<<21)		//changed at 2443
#define BIT_SPI0		(0x1<<22)		//changed at 2443
#define BIT_UART1		(0x1<<23)
#define BIT_NFCON		(0x1<<24)		
#define BIT_USBD		(0x1<<25)
#define BIT_USBH		(0x1<<26)
#define BIT_IIC			(0x1<<27)
#define BIT_UART0		(0x1<<28)
#define BIT_SPI1		(0x1<<29)		//changed at 2443
#define BIT_RTC			(0x1<<30)
#define BIT_ADC			(0x1<<31)
#define BIT_ALLMSK		(0xffffffff)

// PENDING BIT 2
#define BIT_2D			(0x1)
#define BIT_IIC1		(0x1<<1)
#define BIT_ReservedIRQ0	(0x1<<2)
#define BIT_ReservedIRQ1	(0x1<<3)
#define BIT_PCM0		(0x1<<4)
#define BIT_PCM1		(0x1<<5)
#define BIT_I2S0		(0x1<<6)		
#define BIT_I2S1		(0x1<<7)
#define BIT_ALLMSK2		(0xff)

// SUB PENDING BIT
#define BIT_SUB_ALLMSK	(0x1fffffff)		//Changed from 0x7fff to 0x1fffffff at 2443
#define BIT_SUB_AC97	(0x1<<28)		//changed at 2443
#define BIT_SUB_WDT		(0x1<<27)		//changed at 2443
#define BIT_SUB_ERR3	(0x1<<26)		//changed at 2443
#define BIT_SUB_TXD3	(0x1<<25)		//changed at 2443
#define BIT_SUB_RXD3	(0x1<<24)		//changed at 2443
#define BIT_SUB_DMA7	(0x1<<30)		//changed at 2443
#define BIT_SUB_DMA6	(0x1<<29)		//changed at 2443
#define BIT_SUB_DMA5	(0x1<<23)		//changed at 2443
#define BIT_SUB_DMA4	(0x1<<22)		//changed at 2443
#define BIT_SUB_DMA3	(0x1<<21)		//changed at 2443
#define BIT_SUB_DMA2	(0x1<<20)		//changed at 2443
#define BIT_SUB_DMA1	(0x1<<19)		//changed at 2443
#define BIT_SUB_DMA0	(0x1<<18)		//changed at 2443
#define BIT_SUB_LCD4	(0x1<<17)		//changed at 2443
#define BIT_SUB_LCD3	(0x1<<16)		//changed at 2443
#define BIT_SUB_LCD2	(0x1<<15)		//changed at 2443
#define BIT_SUB_LCD1	(0x1<<14)		//changed at 2443
#define BIT_SUB_CAM_P	(0x1<<12)		
#define BIT_SUB_CAM_C   (0x1<<11)       
#define BIT_SUB_ADC		(0x1<<10)
#define BIT_SUB_TC		(0x1<<9)
#define BIT_SUB_ERR2	(0x1<<8)
#define BIT_SUB_TXD2	(0x1<<7)
#define BIT_SUB_RXD2	(0x1<<6)
#define BIT_SUB_ERR1	(0x1<<5)
#define BIT_SUB_TXD1	(0x1<<4)
#define BIT_SUB_RXD1	(0x1<<3)
#define BIT_SUB_ERR0	(0x1<<2)
#define BIT_SUB_TXD0	(0x1<<1)
#define BIT_SUB_RXD0	(0x1<<0)


#define ClearPending(bit) {\
                rSRCPND = bit;\
                rINTPND = bit;\
                rINTPND;\
                }             
#define ClearPending2(bit) {\
                rSRCPND2 = bit;\
                rINTPND2 = bit;\
                rINTPND2;\
                }    

#endif 
