/*
 * Task: Ask user enter number, Print all even squares between 1 and n
 */
#include <stdio.h>

int main(void) {
	int num, i;

	printf("Enter a number: "); 
	scanf("%d", &num);

	for (i = 2; i * i <= num; i += 2) {
		printf("%d\n", i * i);
	}

	return 0;
}
