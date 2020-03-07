.data
.balign 4
arr: .word 1,2,3,4

.text
.global main

main:
    ldr r0, addr_of_arr
    bx lr

addr_of_arr: .word arr
