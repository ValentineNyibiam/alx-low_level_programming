#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * A program that generates a random number
 * Obtains the remainder
 * And then checks the number in accordance with certin conditions
 * Return: 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastdigitof;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigitof = n % 10;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigitof);
	if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, lastdigitof);
	if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
	n, lastdigitof);
	if (n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
	n, lastdigitof); 
	return (0);
}
