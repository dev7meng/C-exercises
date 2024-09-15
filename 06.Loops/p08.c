/*
 * Task: Ask user enter number of days in the month and starting day of the week. Print a one-month calendar
 */
#include <stdio.h>

int main(void) {
	int days, starting_day; 

	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &starting_day);

	for (int space = starting_day - 1; space > 0; --space)
		printf("   "); 

	for (int i = 1; i <= days; i++) {
		printf("%3d", i);
	       			
		if (starting_day == 7) {
			printf("\n");
			starting_day = 0;
		}
		starting_day++; 
	}
	printf("\n"); 
	return 0; 
}
				
