#include <stdio.h>

void index1(int *, int);
void index2(int *, int);

void print_arr(int *arr, int len) {
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(int argc, char **argv) {
    #define COUNT 8
    int arr[COUNT] = {0,1,2,3,4,5,6,7};
    int i;

    index1(arr, COUNT);
    print_arr(arr, COUNT);

    index2(arr, COUNT);
    print_arr(arr, COUNT);

    return 0;
}
