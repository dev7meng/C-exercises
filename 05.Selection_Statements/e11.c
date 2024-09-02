/* 
 * Task: write a switch statement whose controlling expression is the variable area_code
 * 	 If the value of area_code in the table, print city name
 * 	 Otherwise, print "Area code not recognized"
 */
#include <stdio.h>

int main(void) {
	int area_code;

	printf("Enter Area code: ");
	scanf("%d", &area_code);

	switch (area_code) {
		case 229:	printf("Albany");	break;
		case 404: case 470: case 678: case 770:
				printf("Atlanta");	break;
		case 478:	printf("Macon");	break;
		case 706: case 762:
				printf("Columbus");	break;
		case 912: 	printf("Savannah");	break;


		default: 	printf("Area code not recognized");
	}
	printf("\n");
	return 0;
}
