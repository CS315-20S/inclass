/*
 * index1.s - demonstrates the simplest non-updating indexing mode
 */

.global index1

@ r0: array of 32 bit integers
@ r1: length of array

index1:
	mov ip, #0			@ use ip (aka r12) to loop over the array
loop:
	ldr r2, [r0]		@ load r2 with *r0 which is the array element pointed to by r0
	add r2, r2, #1		@ r2++ just to do something with it
	str r2, [r0]		@ store r2 out to *r0, updating the array value 
	add ip, ip, #1		@ loop variable ++
	add r0, r0, #4		@ pointer arithmetic to move r0 four bytes forward, to the next array element
	cmp ip, r1			@ compare loop variable to the array length
	blt loop			@ if there are more array elements remaining, branch to loop, else fall through
	bx lr				@ return nothing. r0 is ignored by the calling function
