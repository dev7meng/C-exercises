/*
 * Task: 
 * 	a) Identify directives and statements
 * 	b) What output does it produce?
 */
#include <stdio.h> /* Directives */

int main(void) {
	printf("Parkinson's Law:\nWork expands so as to "); /* From this ... */
	printf("fill the time\n");
	printf("available for its completion.\n");
	return 0;					    /* ... to this. Statement */

	/*
	 * Output:
	 * *-----------------------------------------------------*
	 * | Parkingson's Law:					 |
	 * | Work expands so as to fill the time		 |
	 * | available for its completion.			 |
	 * | %							 |
	 * *-----------------------------------------------------*
	 */
}

