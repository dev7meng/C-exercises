/* 
 * Task: Ask user to enter 2 dates, then prompt which one is come earlier
 */
#include <stdio.h>

int main(void) {
	int d1, d2, m1, m2, y1, y2;

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m1, &d1, &y1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m2, &d2, &y2);
	
	if (m1 * 30  + d1  + y1 * 365 < m2 * 30 + d2 + y2 * 365)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				m1, d1, y1, m2, d2, y2);
	else 
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
				m2, d2, y2, m1, d1, y1);

	return 0;
}

