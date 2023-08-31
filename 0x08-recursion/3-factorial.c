#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @n: Input of integer type
 * Return: -1 if n is else than one else the factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
