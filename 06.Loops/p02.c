/*
 * Task: Ask user to enter 2 ints, then calculates and displays the greatest common divisor
 */
#include <stdio.h>

int main(void) {
	int m, n, gcd, i;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	if (m == 0 || n == 0) {
		gcd = m + n;
	} 
	else {
		while (n != 0) {
			i = m;
			m = n;
			n = i % n;
		}
		gcd = m;
	}

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}
