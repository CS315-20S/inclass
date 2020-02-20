/*
 * count.s - Count to 10 in ARM assembly
 *           Demonstrates the compare/branch pattern
 */

.global main

main:
	mov r0, #0		@ initialize r0 to use as the loop index
loop:
	add r0, r0, #1	@ r0++
	cmp r0, #10		@ r0 - 10, set Z bit if the result is 0
	bne loop		@ branch if not equal (Z bit not set)
	mov r0, #99		@ if we didn't take the branch, fall thru
end:
	bx lr

