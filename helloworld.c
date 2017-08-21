//#define UTXH0 (volatile unsigned int*)(0x01d00020)

int helloworld(unsigned int *addr,const char *p)
{   
    while(*p)
    {
        *addr = *p++;
    };

    //*UTXH0 = 'q';

    return 0;
}
