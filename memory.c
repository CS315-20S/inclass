// Lab demo of looking at address values to see how memory is organized

#include <stdio.h>
#include <stdlib.h>

int g;

void print_addr(char *desc, void *ptr) {
    printf("desc: %s addr: 0x%lX\n", desc, ptr);
}

int main(int argc, char **argv) {
    int s;
    print_addr("global", &g);
    print_addr("stack", &s);
    print_addr("code", &print_addr);

    char *h = malloc(32);
    print_addr("heap", h);

    return 0;
}


