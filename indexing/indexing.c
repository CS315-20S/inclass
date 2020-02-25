#include <stdio.h>

void index1(int *, int);

int main(int argc, char **argv) {
	int arr[8] = {0,1,2,3,4,5,6,7};
	index1(arr, 8);
	return 0;
}
