/*
 * Task: Modify p11.c so the program continues adding terms until the current term becomes < E where E is entered by the user (float)
 */
#include <stdio.h>

int main(void) {
	float e = 1, x = 1, n;

	printf("Enter the value of n: ");
	scanf("%f", &n);

	for (int i = 1; ; i++) {
		for (int j = 1; j <= i; j++) {
			x *= j;
		}
		if ( e + (1.0f / x) >= n) break;
		e += (1.0f / x);
		x = 1;
	}
	printf("The approximates value of e that less than the value you entered is %.6f\n", e);
	return 0; 
}
