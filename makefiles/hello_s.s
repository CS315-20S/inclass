/* 
 * hello_s.s - a trivial ARM assembly language file to use
 *             to demonstrate adding .s files to the Makefile
 *
 *             Note that the label is called hello rather than main
 *             because we already have a main() in hello.c and it 
 *             would be a linker error to define the same symbol twice
 */
 
.global hello
.func hello

hello:
	mov r0, #1
	bx lr

