/* 
 * Task: write a program that computes the volume of a sphere with a 10m radius
 */

#include <stdio.h>
#define VALUE_OF_PI 3.14159f

int main(void) {
	int radius = 10;

	printf("Volume of a sphere with 10-meters radius: %.2f\n", (4.0f / 3.0f) * VALUE_OF_PI * (radius * radius * radius));

	return 0;
}	
