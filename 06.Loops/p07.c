/*
 * Task: Rearrange square3.c so that the for loop init i, test i, and increments i. Don't rewrite or use any multiplications
 */
#include <stdio.h>

int main(void) {
	int n, odd, square;

	printf("This program prints a table of squares\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	square = 1;
	for (int i = 1; i <= n; ++i) {
		printf("%10d%10d\n", i, square);
		square += odd;
		odd += 2;
	}
	return 0;
}
