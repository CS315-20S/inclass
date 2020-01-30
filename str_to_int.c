#include <stdio.h>
#include <string.h>

unsigned int str_to_int(char *s) {
    int len = strlen(s);
    int base = 10;
    int place_value = 1;
    int retval = 0;
    for (int i = len - 1; i >= 0; i--) {
        int digit = s[i] - '0';
        retval += place_value * digit;
        place_value *= base;
    }
    return retval;
}

int main(int argc, char **argv) {
    unsigned int i = str_to_int(argv[1]);
    printf("%d\n", i);   
    return 0;
}
