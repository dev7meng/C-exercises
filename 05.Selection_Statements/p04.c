/* 
 * Task: Ask user to enter wind speed (knots) ten display the description
 */
#include <stdio.h>

int main(void) {
	int wind_speed;

	printf("Enter wind speed (knots): ");
	scanf("%d", &wind_speed); 

	if (wind_speed < 1)
		printf("Calm\n");
	else if (wind_speed < 4)
		printf("Light air\n");
	else if (wind_speed < 28)
		printf("Breeze\n");
	else if (wind_speed < 48)
		printf("Gale\n");
	else if (wind_speed < 64)
		printf("Storm\n");
	else
		printf("Hurricane\n");

	return 0;
}
