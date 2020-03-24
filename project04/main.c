#include <stdio.h>

int add2(int, int);

int main(int argc, char **argv) {

    unsigned int registers[16]; // emulated registers

    // fetch
    unsigned int *ptr_to_instructions = (unsigned int*) add2;
    unsigned int iw = *ptr_to_instructions; // instruction word

    // decode

    // destination reg is 4 bits starting at bit 12
    unsigned int rd = (iw >> 12) & 0b1111;

    // first source reg is 4 bits starting at bit 16
    unsigned int rn = (iw >> 16) & 0b1111;

    // opcode (of the data processing family) is 4 bits starting at bit 21
    unsigned int opcode = (iw >> 21) & 0b1111;
    
    if (opcode == 0b0100) { 
        // execute ADD instruction
        registers[rd] = registers[rn] + 0; // next time: + decode op2
    }

    printf("result: %d\n", rd);
}
