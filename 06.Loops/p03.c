/*
 * Task: Ask user to enter fraction, then reduces the fraction to lowers terms
 */
#include <stdio.h>

int main(void) {
	int num, denom, i, j, x, gcd; 

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);

	/* Compute GCD */
	i = num;
	j = denom;
	while (j != 0) {
		x = i;
		i = j;
		j = x % j;
	}
	gcd = i;

	printf("In lowest terms: %d/%d\n", num / gcd, denom / gcd);

	return 0;
}
	
