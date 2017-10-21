.equ FIFO,          0x50000020
.equ DISABLE_IRQ,   0X80
.equ DISABLE_FIQ,   0X40
.equ SVC_MOD,       0X13
.equ IRQ_MOD,       0X12
.equ FIQ_MOD,       0X11
.equ ABT_MOD,       0X17
.equ UND_MOD,       0X1B
.equ SYS_MOD,       0X1F

.equ MEM_SIZE,      0x2000
.equ TEXT_BASE,     0x40000000
.equ _SVC_STACK,    (MEM_SIZE+TEXT_BASE-4)
.equ _IRQ_STACK,    (_SVC_STACK-0X100)
.equ _FIQ_STACK,    (_IRQ_STACK-0X100)
.equ _ABT_STACK,    (_FIQ_STACK-0X100)
.equ _UND_STACK,    (_ABT_STACK-0X100)
.equ _SYS_STACK,    (_UND_STACK-0X100)

.text
.code  32
.global __vector_reset

.extern _start
.extern plat_boot
.extern __bss_start__
.extern __bss_end__

__vector_reset:

/*开icache*/
#ifdef SYS_ICACHE_OFF
    bic r0,r0,#0x00001000
#else
    orr r0,r0,#0x00001000
#endif
    mcr p15,0,r0,c1,c0,0

/*初始化栈*
    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|SVC_MOD)
    ldr sp,=_SVC_STACK

    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|IRQ_MOD)
    ldr sp,=_IRQ_STACK

    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|FIQ_MOD)
    ldr sp,=_FIQ_STACK

    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|ABT_MOD)
    ldr sp,=_ABT_STACK

    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|UND_MOD)
    ldr sp,=_UND_STACK

    msr cpsr_c,#(DISABLE_IRQ|DISABLE_FIQ|SYS_MOD)*/
    ldr sp,=0x40002000

_clear_bss:
    ldr r1,_bss_start_
    ldr r3,_bss_end_
    mov r2,#0x0

lb:
    cmp r1,r3
    beq _main
    str r2,[r1],#0x4
    b lb

_main:
    b plat_boot

_bss_start_:    .word __bss_start__
_bss_end_:      .word __bss_end__

.end


