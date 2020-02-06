// Demo of overflowing the stack with infinite recursion

#include <stdio.h>

void boom(char *buf) {
    printf("boom\n");
    boom(buf);
}

int main(int argc, char** argv) {
    char buf[1024];
    boom(buf);
    return 0;
}
