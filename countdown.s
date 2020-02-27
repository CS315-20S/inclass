/* 
 * countdown.s - trivial example of a recursive function in ARM assembly language
 *
 *               demonstrates saving and restoring the link register (LR) on the
 *               stack across function calls (BL)
 *
 *               to build: gcc -g -o countdown countdown.s
 *               then watch it run in gdb to understand recursion: gdb countdown
 */

.global main

main:
    push {lr}           @ push LR onto the stack so we can call countdown safely
    mov r0, #3          @ r0 contains the number of times countdown will recurse
    bl countdown        @ call countdown, putting the next instruction's addr into LR
    pop {lr}            @ restore our LR
    bx lr               @ return from main

countdown:
    push {lr}           @ push LR onto the stack so we can safely recurse
    sub r0, r0, #1      @ decrement r0, our countdown counter
    cmp r0, #0          @ have we counted down to zero?
    beq blastoff        @  if so, branch to blastoff
    bl countdown        @  else, recurse into countdown again
blastoff:
    pop {lr}            @ restore our LR since it was overwritten by a recursion
    bx lr               @ return from countdown
