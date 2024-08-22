/*
 * Task: ask user enter phone number in form: (xxx) xxx-xxxx
 * 	 then display it in form: xxx.xxx.xxxx
 */
#include <stdio.h>

int main(void) {
	int num1, num2, num3;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &num1, &num2, &num3);

	printf("You entered: %d.%d.%d\n", num1, num2, num3);

	return 0;
}
