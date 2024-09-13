#include <stdio.h>

int main (void) {
	int i, sum = 10;

	for (i = 0; i < 10; i++) {
		if (i % 2)
			continue;
		sum += 1;
	}	
	printf("%d\n", sum);
	return 0;
}
