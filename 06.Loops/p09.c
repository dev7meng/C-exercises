/*
 * Task: Modify project 8 chapter 2 to ask usser enter the number of payments and then displays the balance remaining after each of these payment
 */
#include <stdio.h>

int main(void) {
	float loan, rate, amount;
	int number_of_payments; 

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	rate = (rate / 12.0f) / 100.00f;

	printf("Enter number of payments: "); 
	scanf("%d", &number_of_payments);

	printf("Enter amount of each payment: ");
	scanf("%f", &amount);

	for (int i = 1 ; i <= number_of_payments; i++) {
		loan = (loan * (1 + rate)) - amount;
		printf("Balance remain after %d", i);
		switch (i % 10) {
			case 1: printf("st "); break;
			case 2: printf("nd "); break;
			case 3: printf("rd "); break;
			default: printf("th ");
		}
		printf("payment: $%.2f\n", loan);
	}
	return 0;
}
