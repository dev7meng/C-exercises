/*
 * Task: Write a program that asks user to enter two-digit number
 *       Then print number with its digits reversed
 *       Read the number using only one %d
 */
#include <stdio.h>

int main(void) {
	int i, first, last; 

	printf("Enter two-digit number: ");
	scanf("%d", &i);

	last = i % 10; 
	first = (i - last) / 10;

	printf("The reversal is: %d%d\n", last, first);

	return 0;
}
