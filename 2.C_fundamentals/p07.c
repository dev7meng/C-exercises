/* 
 * Task: Ask the user to enter a U.S dollar amount
 * 	 then shows how to pay that amount using the smallest number of $20, 10, 5 and 1 bills
 */

#include <stdio.h>

int main(void) {
	int amount;

	printf("Enter an amount: ");
	scanf("%d", &amount);

	int _20bills = amount / 20;
	printf("$20 bills: %d\n", _20bills);
	int amount1 = amount - _20bills * 20;

	int _10bills = amount1 / 10;
	printf("$10 bills: %d\n", _10bills);
	int amount2 = amount1 - _10bills * 10;

	int _5bills = amount2 / 5;
	printf("$5  bills: %d\n", _5bills);
	int amount3 = amount2 - _5bills * 5;

	printf("$1  bills: %d\n", amount3);

	return 0;
}
