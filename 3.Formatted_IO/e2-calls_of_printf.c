/*
 * Task: display a float variable x in the following format
 */

#include <stdio.h>

int main(void) {
	float x = 132.321f;   /* initialize x with a random value */
	
	printf("Exponential notation; left-justified in a filed of size 8: one digit after decimal point:\n%-8.1e\n", x);

	printf("Exponential notation; right-justified in a filed of size 10: six digits after decimal point:\n%10.6e\n", x);

	printf("Fixed decimal notation; left-justified in a filed of size 8: three digits after decimal point:\n%-8.3f\n", x);
	
	printf("Fixed decimal notation; right-justified in a filed of size 6: no digits after decimal point:\n%6.0e\n", x);

	return 0;
}
