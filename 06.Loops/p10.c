/*
 * Task: Modify p09.c in Chap5 so that user can enter any number of date. 0/0/0 indicated that no more date
 */
#include <stdio.h>

int main(void) {
	int m, d, y, em, ed, ey;
	em = 99;	/* Init earlier_m/d/y to large number */
	ed = 99;	/* to make sure that first date entered */
	ey = 99;	/* will always come first */

	while (1) {
		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &m, &d, &y);

		if ( m <= 0 || d <= 0 || y <= 0 || m > 12 || d > 31 )
			break;
		
		if ( (m * 30 + d + y * 365) < (em * 30 + ed + ey * 365) ) {
			em = m;
			ed = d;
			ey = y;
		}
	}
	printf("%.2d/%.2d/%.2d is the earliest date\n", em, ed, ey);
	return 0; 
}
