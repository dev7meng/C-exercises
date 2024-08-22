/*
 * Task: Ask the user to enter dollars-and-cents amount then displays the amount w/ 5% tax added
 */

#include <stdio.h>

int main(void) {
	float dollars_and_cents;

	printf("Enter an amount: ");
	scanf("%f", &dollars_and_cents);

	printf("With tax addedd: %.2f\n", dollars_and_cents * 1.05f);
	
	return 0;
}
