/* midterm-notes.s - This isn't a runnable program, just a sketch of answers
 *                   to questions while we were reviewing for the midterm
 */
 
.global main

main:
    @push {r5, lr}
    sub sp, sp, #8      @ allocate space for two registers on the stack
    str r5, [sp, #4]    @ store what's in R5 onto the stack
    str lr, [sp]        @ store what's in LR onto the stack

                        @ show the compare/branch pattern
    mov r0, #0
    mov r1, #1
    cmp r0, r1          @ subtract r0 - r1, use the result to set condition codes in CPSR
    beq done            @ conditional branch: consult CPSR for "equal" (CPSR Z bit is set)
    bmi loop            @ another of the 16 condition codes - we'll discuss more for project04


    @C string: {'a', 'b', 'c', '\0'}
    @ indexing mode: register indirect without updating
    ldrb r2, [r0] @ load one byte from what r0 points to
    ldr r3, [r0] @ load four bytes (one word) from what r0 points to
    ldrh r3, [r0] @ load two bytes (half word) from what r0 points to

    @indexing mode: post-updating
    @ equivalent to C expression *p++, e.g. while (*p++) // walk a string
    ldr r1, [r0], #4  @ r1 = *r0, r0++
    ldr r2, [r0] @ the next value in the r0 array

    @ do something with R5 which makes us push/pop it
    @ calling a function using BL means we need to stack the link register 
    bl foobar

done:
    @pop {r5, lr}
    ldr lr, [sp]        @ load LR to the value it was when we entered main
    ldr r5, [sp, #4]
    add sp, sp, #8      @ deallocate what we allocated on the stack

    bx lr
    
