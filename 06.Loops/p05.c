/*
 * Task: Generalize p01 in Chap4 to reverse any number
 */
#include <stdio.h>

int main(void) {
	int num, d, i, reverse_num = 0; 

	printf("Enter an integer: ");
	scanf("%d", &num);

	while (num != 0) {
		d = num % 10; 
		reverse_num = reverse_num * 10 + d;
		num = (num - d) / 10;
	}

	printf("The reversal is: %d\n", reverse_num);
	return 0;
}
