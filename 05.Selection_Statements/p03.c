/*
 * Task: Modify the broker.c program (section 5.2) by:
 * 		(a) ask user number of shares and price per share instead of value
 *		(b) add statement that compute commission charge 
 *			$33 + 3c/share for < 2000 shares
 *			$33 + 2c/share for > 2000 shares
 *		    display rivel's commission as well as the commission charged
 *		    by the original broker
 */
#include <stdio.h>

int main(void) {
	int share;
	float price_per_share, value, original_commission, charge, rival_commission;

	printf("Enter number of shares: ");
	scanf("%d", &share);

	printf("Enter price per share: ");
	scanf("%d", &price_per_share);

	/* Original broker */
	
	value = share * price_per_share;
	
	if (value < 2500.00f)
		original_commission = 30.00f + .017f * value;
	else if (value < 6250.00f)
		original_commission = 56.00f + .0066f * value; 
	else if (value < 20000.00f)
		original_commission = 76.00f + .0034f * value; 
	else if (value < 50000.00f)
		original_commission = 100.00f + .0022f * value;
	else if (value < 500000.00f)
		original_commission = 155.00f + .0011f * value;
	else
		original_commission = 255.00f + .0009f * value;

	if (original_commission < 39.00f)
		original_commission = 39.00f;

	printf("Commission of original broker: $%.2f\n", original_commission);

	/* Rival broker */

	if (share < 2000) 
		rival_commission = 33 + (0.03 * share);
	else 
		rival_commission = 33 + (0.02 * share);
	
	printf("Commission of rival broker: $%.2f\n", rival_commission);

	return 0;
}
