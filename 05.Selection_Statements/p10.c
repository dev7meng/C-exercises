/* 
 * Task: Ask user enter grade. Convert and print the letter grade
 * 	 A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: 0-59
 */
#include <stdio.h>

int main(void) {
	int grade, ten_digit;
	
	printf("Enter numerical grade (0-100): ");
	scanf("%d", &grade);

	if (grade > 100 || grade < 0) 
		printf("INVALID GRADE\n");
	else {
		ten_digit = grade / 10;

		printf("Letter grade: ");
		switch (ten_digit) {
			case 9: case 10:
				printf("A");	break;
			case 8: printf("B");	break;
			case 7: printf("C");	break;
			case 6: printf("D");	break;
			default: printf("F");	break;
		}
		printf("\n");
	}

	return 0; 
}
