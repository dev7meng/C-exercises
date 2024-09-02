/*
 * Task: Ask user to ener a time (24h). Display the departure and arrival times
 * 	 for the closest flight
 */
#include <stdio.h>
#define MINUTES_PER_HOUR 60

int main(void) {
	int h, m, expr_minutes,
	    expr1, expr2, expr3, expr4, expr5, expr6, expr7, expr8,
	    avg1, avg2, avg3, avg4, avg5, avg6, avg7;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	if ( 0 <= h && h <= 24 && 0 <= m && m < 60 ) {

		expr_minutes = h * MINUTES_PER_HOUR + m;

		expr1 = 8 * MINUTES_PER_HOUR + 0;
		expr2 = 9 * MINUTES_PER_HOUR + 43;
		expr3 = 11 * MINUTES_PER_HOUR + 19;
		expr4 = 12 * MINUTES_PER_HOUR + 47;
		expr5 = 14 * MINUTES_PER_HOUR + 0;
		expr6 = 15 * MINUTES_PER_HOUR + 45;
		expr7 = 19 * MINUTES_PER_HOUR + 0;
		expr8 = 21 * MINUTES_PER_HOUR + 45;

		avg1 = (expr1 + expr2) / 2;
		avg2 = (expr2 + expr3) / 2;
		avg3 = (expr3 + expr4) / 2;
		avg4 = (expr4 + expr5) / 2;
		avg5 = (expr5 + expr6) / 2;
		avg6 = (expr6 + expr7) / 2;
		avg7 = (expr7 + expr8) / 2;

		printf("Closest departure time is ");
		if (expr_minutes <= avg1) {
			printf("8:00 a.m., arriving at 10:16 a.m.\n");
		}
		else if (expr_minutes <= avg2) {
			printf("9:43 a.m., arriving at 11:52 a.m.\n");
		}
		else if (expr_minutes <= avg3) {
			printf("11:19 a.m., arriving at 1:31 p.m.\n");
		}
		else if (expr_minutes <= avg4) {
			printf("12:47 a.m., arriving at 3:00 p.m.\n");
		}
		else if (expr_minutes <= avg5) {
			printf("2:00 p.m., arriving at 4:08 p.m.\n");
		}
		else if (expr_minutes <= avg6) {
			printf("3:45 p.m., arriving at 5:55 p.m.\n");
		}
		else if (expr_minutes <= avg7) {
			printf("7:00 p.m., arriving at 9:20 p.m.\n");
		}
		else {
			printf("9:45 p.m., arriving at 11:58 p.m.\n");
		}
	}

	return 0;
}
