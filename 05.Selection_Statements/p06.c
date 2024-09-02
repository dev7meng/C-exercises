/* 
 * Task: ask user for UPC code, print if the code VALID or NOT
 */
#include <stdio.h>

int main(void) {
	int d, i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, c, 
	    	first_sum, second_sum, total;

	printf("Enter UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
		&d, &i0, &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &c);

	first_sum = d + i1 + i3 + i5 + i7 + i9;
	second_sum = i0 + i2 + i4 + i6 + i8;
	total = 3 * first_sum + second_sum;

	if ( c == (9 - ((total -1) % 10)) )
		printf("VALID\n");
	else
		printf("NOT VALID\n");

	return 0;
}
