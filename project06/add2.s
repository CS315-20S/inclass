add2_main:
    @ set up the parameters for add2
    mov r0, #3
    mov r1, #4
    b add2

add2:
    @ add r0 and r1, returning r0
    add r0, r0, r1

spin:
    @ enter an infinite loop
    b spin

