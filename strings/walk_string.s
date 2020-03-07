.global walk_string

@ r0 contains the address of a null terminated C string

walk_string:
    ldrb r1, [r0]
    add r0, r0, #1
    cmp r1, #0      @ '\0'
    bne walk_string
    bx lr

