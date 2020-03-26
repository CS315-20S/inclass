#include <stdio.h>
#include <string.h>

#include "armemu.h"

int add2(int, int);

int main(int argc, char **argv) {

    // Initialize emulator
    emulator emu;
    memset(emu.regs, 0, sizeof(unsigned int));
    emu.cpsr = 0;

    // PC <- pointer to instructions as an unsigned int
    emu.regs[REG_PC] = (unsigned int) add2;

    do {
        unsigned int iw = *(unsigned int*) emu.regs[REG_PC];

        // Assume it's a data processing instruction in this starter code.
        // Your real code will decode iw according to the bits shown in the
        // instruction set manual I posted

        // destination reg is 4 bits starting at bit 12
        unsigned int rd = (iw >> 12) & 0b1111;

        // first source reg is 4 bits starting at bit 16
        unsigned int rn = (iw >> 16) & 0b1111;

        // opcode (of the data processing family) is 4 bits starting at bit 21
        unsigned int opcode = (iw >> 21) & 0b1111;

        if (opcode == 0b0100) { 
            // execute ADD instruction
            emu.regs[rd] = emu.regs[rn] + 0; // need to decode op2
        } else if (opcode == 0b0010) {
            // execute SUB instruction
            emu.regs[rd] = emu.regs[rn] - 0; // need to decode op2
        }

        // Move PC forward 4 bytes to get the next instruction
        emu.regs[REG_PC] += 4;
        
    } while (1); // Your real code will have a way to stop

    // Return value is in R0, just like AAPCS
    printf("result: %d\n", emu.regs[0]);
}
