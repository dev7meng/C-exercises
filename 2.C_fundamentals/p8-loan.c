/* 
 * Task: Calculates the remaining balance on a loan after the 1st, 2nd and 3rd monthly payment
 */

#include <stdio.h>

int main(void) {
	float loan, rate, monthly_rate, monthly_payment, balance1, balance2, balance3;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);
	
	monthly_rate = rate / 12.0f / 100;
	/* printf("Monthly interest rate will be %.4f\n", monthly_rate); */

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	balance1 = (loan * (1 + monthly_rate)) - monthly_payment;
	printf("Balance remain after first payment: %.2f\n", balance1);	

	balance2 = (balance1 * (1 + monthly_rate)) - monthly_payment;
	printf("Balance remain after second payment: %.2f\n", balance2);

	balance3 = (balance2 * (1 + monthly_rate)) - monthly_payment;
	printf("Balance remain after third payment: %.2f\n", balance3);

	return 0;
}
