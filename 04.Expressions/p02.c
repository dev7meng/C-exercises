/* 
 * Task: Extend the program in P01 to handle three-digit numbers
 */
#include <stdio.h>

int main(void) {
	int i, left, mid, right;

	printf("Enter three-digit number: ");
	scanf("%d", &i);

	right = i % 10;
	mid = ((i % 100) - right) / 10;
	left = (i - (i % 100)) / 100;

	printf("The reversal is: %d%d%d\n", right, mid, left);
	return 0;
}
