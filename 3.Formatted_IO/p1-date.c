/* 
 * Task: Accept a date from user in the form mm/dd/yyyy and then print it in the from yyyymmdd
 */
#include <stdio.h>

int main(void) {
	int y, m, d;

	printf("Enter date in form mm/dd/yyyy: ");
	scanf("%d/%d/%d", &m, &d, &y);                /* to allow user enter spaces before and after each '/'
						         replace the formatted string with: "%d /%d /%d"     */
						       

	printf("Date: %.4d%.2d%.2d\n", y, m, d);

	return 0;
}
