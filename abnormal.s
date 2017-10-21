.global __vector_undefined
.global __vector_swi
.global __vector_irq
.global __vector_fiq
.global __vector_reserved
.global __vector_data_abort

.extern do_irq

.text
.code 32

__vector_undefined:
    nop
__vector_swi:
    nop
__vector_irq:
    ldr sp,=(0x31000000+0x100000)
    sub lr,lr,#4
    stmdb sp!,{r0-r12,lr}
    bl do_irq
    ldmia sp!,{r0-r12,pc}^
__vector_fiq:
    nop
__vector_reserved:
    nop
__vector_data_abort:
    nop

