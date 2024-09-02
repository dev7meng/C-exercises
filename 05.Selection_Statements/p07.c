/*
 * Task: Ask user enter 4 ints, print out the largest and smallest
 */
#include <stdio.h>

int main(void) {
	int num1, num2, num3, num4, 
	    larger1, larger2, smaller1, smaller2, 
	    largest, smallest;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 >= num2) {
		larger1 = num1;
		smaller1 = num2;
	}
	else {
		larger1 = num2;
		smaller1 = num1;
	}

	if (num3 >= num4) {
		larger2 = num3;
		smaller2 = num4;
	}
	else {
		larger2 = num4;
		smaller2 = num3;
	}

	if (larger1 >= larger2)
		largest = larger1;
	else
		largest = larger2;

	if (smaller1 <= smaller2)
		smallest = smaller1;
	else
		smallest = smaller2;

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
