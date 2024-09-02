/* 
 * Task: Ask user for 24h format time, print out 12h format time
 */
#include <stdio.h>

int main(void) {
	int h, m;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	if ( h < 0 || h > 24  || m < 0 || m >= 60 ) {
		printf("Invalid time\n");
	}
	else {
		printf("Equivalent 12-hour time: ");
	
		if ( h > 12 ) 
			printf("%.2d:%.2d PM\n", h - 12, m);	
		else 
			printf("%.2d:%.2d AM\n", h, m);
	}

	return 0;
}
