#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: number of which factorial will be calculated
 *
 * Return: -1 if n is less than 0, 1 if n is zero,
 * else the factorial of the n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
