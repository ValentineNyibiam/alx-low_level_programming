#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * positive_or_negative - Checks if a number is positive or negative
 * @i: input of integer type
 * Return: 0 (Success)
 */

/* betty style doc for function main goes there */
int positive_or_negative(int i)
{
	int n;

	n = i;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
