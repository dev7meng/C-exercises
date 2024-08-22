/*
 * Task: Ask user product informations and then display it in form:
 * 	Item			Unit			Purchase
 * 				Price			Date
 * 	<item number>		$ <price		<mm/dd/yyyy>
 * 			  	up to
 * 			  	9999.99>
 * EX:	123			$ 9999.99		08/22/2024
 */
#include <stdio.h>

int main(void) {
	int item_num, month, date, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item_num);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("Item\t\t\tUnit\t\t\tPurchase\n");			/* first row */
	printf("\t\t\tPrice\t\t\tDate\n");				/* second row */
	printf("%d\t\t\t$ %7.2f\t\t%.2d/%.2d/%.4d\n",			/* last row */
			item_num, price, month, date, year);

	/*
	 * Although it said the price value should be "up to" 9999.99. But I couldn't find
	 * any solution to limit the number user enter. Thus, if price value is too big
	 * the date will be unalignment. I don't think we have the right tool to solve the
	 * problem yet. Or I must misunderstood the assignment somehow
	 */

	return 0;
}
