/*
 * indexing_shift.s - Demonstrate ARM indexing mode using shifted register
 */

.global index2

@ r0: memory buffer of words (32 bits each)
@ r1: count of words in the buffer

index2:
    mov ip, #0						@ r12 (aka ip)  is the loop variable
loop:
    ldr r2, [r0, ip, LSL #2]		@ r2 = *(r0 + ip*4)
    add r2, r2, #1					@ r2++
    str r2, [r0, ip, LSL #2]		@ *(r0 + ip*4) = r2
    add ip, ip, #1					@ loop++
    cmp ip, r1						@ done?
    blt loop						@	not yet, go again
    bx lr							@ return
