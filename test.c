#include <stdio.h>

int main (void) {
	int i;
	i = 0;

	printf("%d", (i < 0) ? (i = -1) : ((i > 0) ? (i = 1) : (i = 0) ));
	return 0;
}
