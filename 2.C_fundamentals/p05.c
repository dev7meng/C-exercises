/*
 * Task: asks the user to enter a value of x and then displays the value of 3x^5 + 2x^4 - 5x^3 - x^2 +7x - 6
 */
#include <stdio.h>

int main(void) {
	float x;

	printf("Value of x: ");
	scanf("%f", &x);

	printf("Value of polynomial: %.2f\n",
			3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6);

	return 0;
}
