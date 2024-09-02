/* 
 * Task: Rewrite P02 so that it doesn't use any arithmetic to split the number into digits
 */
#include <stdio.h>

int main(void){
	int left, mid, right; 

	printf("Enter three-digit number: ");
	scanf("%1d%1d%1d", &left, &mid, &right);

	printf("The reversal is: %d%d%d\n", right, mid, left);
	return 0;
}
