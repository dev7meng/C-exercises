/*
 * Task: Write a program that calculates how many digits a number contain
 * Modify: Work for both positive and negative int
 */
#include <stdio.h>

int main(void) {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if ( number < 0 ) number = -number; 	

	if ( number >= 0 && number <= 9 ) {
		printf("The number has 1 digit\n");
	}
	else if ( number <= 99 ) {		
		printf("The number has 2 digits\n");
	}
	else if ( number <= 999 ) {
		printf("The number has 3 digits\n");
	}
	else
		printf("The number has 4 or more digits\n");

	return 0;
}
