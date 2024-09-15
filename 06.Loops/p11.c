/*
 * Task: calculate approximates e by computing the value of: 1 + 1/1! + 1/2! + ... + 1/n! while n is entered by the user
 */
#include <stdio.h>

int main(void) {
	int n, x = 1;
	float e = 1;

	printf("Enter the value of n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			x *= j;
		}
		e += 1.0f / x;
		x = 1; 
	}
	printf("%f\n", e);
	return 0;
}
