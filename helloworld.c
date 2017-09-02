//#define UTXH0 (volatile unsigned int*)(0x01d00020)

#ifndef UTXH0
int helloworld(unsigned int *addr,const char *p)
{   
    while(*p)
    {
        *addr = *p++;
    };

    //*UTXH0 = 'q';

    return 0;
}

#else
    void helloworld(void)
    {
        const char *p = "helloworld";
        
        while(*p)
		{
			*UTXH0 = *P++;
		}
        while(1);
    }

#endif
