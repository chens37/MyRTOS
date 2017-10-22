#include "include/stdio.h"
#include "S3C2451.h"

void do_irq(void)
{
    int i;

    printf("hello\n\r");
    for(i = 0;i < 4;i++)
    {
        if(INTPND & (1<<i))
        {
            if(GPFDAT & (1<<i))
            {
                printf("key%d released\n\r",i);
                break;
            }
            else 
            {
                printf("key%d pressed\n\r",i);
                break;
            }
        }
    }

    SRCPND = 1<<i;
    INTPND = INTPND;
}
