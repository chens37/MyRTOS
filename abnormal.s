.global __vector_undefined
.global __vector_swi
.global __vector_irq
.global __vector_fiq
.global __vector_reserved
.global __vector_data_abort


.text
.code 32

__vector_undefined:
    nop
__vector_swi:
    nop
__vector_irq:
    nop
__vector_fiq:
    nop
__vector_reserved:
    nop
__vector_data_abort:
    nop

