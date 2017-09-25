.section .startup


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

/*代码重定位*/
adr r0,_start
ldr r1,=_start
ldr r2,=__bss_start__
cmp r0,r1
beq Next

copy_loop:
    ldr r3,[r0],#4
    str r3,[r1],#4
    cmp r1,r2
    bne copy_loop

Next:
    ldr pc, __vector_reset /*程序已经过虚拟内存映射，ldr，pc暂时无法使用*/
#ldr  pc,=_vector_reset
#ldr pc,_vector_undefined
#ldr pc,_vector_swi
#ldr pc,_vector_irq
#ldr pc,_vector_fiq
#ldr pc,_vector_reserved
#ldr pc,_vector_data_abort

_vector_reset:      .word __vector_reset
_vector_undefined:  .word __vector_undefined
_vector_swi:        .word __vector_swi
_vector_irq:        .word __vector_irq
_vector_fiq:        .word __vector_fiq
_vector_reserved:   .word __vector_reserved
_vector_data_abort:   .word __vector_data_abort



