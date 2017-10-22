.section .startup


.global _start
.extern __vector_reset
.extern __vector_undefined
.extern __vector_swi
.extern __vector_irq
.extern __vector_fiq
.extern __vector_reserved
.extern __vector_data_abort

.equ CFG_BANK_CFG_VAL,      0x0004920d
.equ CFG_BANK_CON1_VAL,     0x04000040
.equ CFG_BANK_CON2_VAL,     0x0057003a
.equ CFG_BANK_CON3_VAL,     0x80000030
.equ CFG_BANK_REFRESH_VAL,  0x00000313


_start:

b _temp
b _vector_undefined
b _vector_swi
b _vector_reserved
b _vector_data_abort
b _vector_data_abort
ldr pc,_vector_irq
b _vector_fiq

_temp:

ldr r0,=0x53000000
mov r1,#0
str r1,[r0]

/*内存初始化*/
adr r0, sdram_bank_set_val
bl sdr_ctrl_asm_init
/*
adr r0,_start
ldr r1,=0x00000000
ldr r2,=0x00000020
cmp r0,r1
beq code

loop:
    ldr r3,[r0],#4
    str r3,[r1],#4
    cmp r1,r2
    bne loop

code:
*/
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
    ldr pc,_vector_reset
#ldr  pc,=_vector_reset
ldr pc,_vector_undefined
ldr pc,_vector_swi
ldr pc,_vector_irq
ldr pc,_vector_fiq
ldr pc,_vector_reserved
#ldr pc,_vector_data_abort

_vector_reset:      .word __vector_reset
_vector_undefined:  .word __vector_undefined
_vector_swi:        .word __vector_swi
_vector_irq:        .word __vector_irq
_vector_fiq:        .word __vector_fiq
_vector_reserved:   .word __vector_reserved
_vector_data_abort:   .word __vector_data_abort

 .ltorg
sdram_bank_set_val:
    .word   CFG_BANK_CFG_VAL
    .word   CFG_BANK_CON1_VAL
    .word   CFG_BANK_CON2_VAL
    .word   CFG_BANK_CON3_VAL
    .word   CFG_BANK_REFRESH_VAL

