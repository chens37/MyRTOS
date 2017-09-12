.section .startup
.code 32
.align 4

.global _start
.extern _vector_reset
.extern __vector_reset
.extern __vector_undefined
.extern __vector_swi
.extern __vector_irq
.extern __vector_fiq
.extern __vector_reserved
.extern __vector_data_abort

_start:

ldr r0,=0x53000000
mov r1,#0
str r1,[r0]

b    _vector_reset
#ldr  pc,_vector_reset
#ldr pc,_vector_undefined
#ldr pc,_vector_swi
#ldr pc,_vector_irq
#ldr pc,_vector_fiq
#ldr pc,_vector_reserved
#ldr pc,_vector_data_abort

.align 4

_vector_reset:      .word __vector_reset
_vector_undefined:  .word __vector_undefined
_vector_swi:        .word __vector_swi
_vector_irq:        .word __vector_irq
_vector_fiq:        .word __vector_fiq
_vector_reserved:   .word __vector_reserved
_vector_data_abort:   .word __vector_data_abort



