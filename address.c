#include <stdio.h>

// demo of printing a pointer value as long hex integer

int main() {
    char buf[10];
    char *pb = buf;
    printf("pb: 0X%lX\n", pb);
    return 0;
}
