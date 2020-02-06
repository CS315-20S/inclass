// Demo of using the same bit pattern and interpreting it as either signed or unsigned

#include <stdio.h>

#define BITS 0b1111111111111111

int main(int argc, char **argv) {
    short s = BITS;
    unsigned short u = BITS;
    printf("signed: %d unsigned: %u\n", s, u);
    return 0;
}
