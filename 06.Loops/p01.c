/* 
 * Task: Write a program ask user enter number until it is =< 0. Then print out the largest number have been entered
 */
#include <stdio.h>

int main(void) {
	float num, largest = 0;
	int i;

	while (1) {
		printf("Enter a number: ");
		scanf("%f", &num);

		if (num <= 0)
			break;
		if (num > largest)
			largest = num;
	}

	printf("The largest number entered was %.2f\n", largest);
	return 0;
}
