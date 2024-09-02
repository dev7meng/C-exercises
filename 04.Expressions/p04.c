/*
 * Task: Ask user for an integer, display it in octal (base-8)
 */
#include <stdio.h>

int main(void) {
	int num, i1, i2, i3, i4, i5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	i1 = num % 8;
	num = num / 8;
	i2 = num % 8;
	num = num / 8;
	i3 = num % 8;
	num = num / 8;
	i4 = num % 8; 
	num = num / 8;
	i5 = num % 8;	

	printf("In octal, your number is: %.1d%.1d%.1d%.1d%.1d\n", i5, i4, i3, i2, i1);
	return 0;
}
