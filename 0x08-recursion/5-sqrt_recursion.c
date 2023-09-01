#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Input of integer type
 * Return: An integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - carries out the recursive operation
 * @n: Input of integer type
 * @i: input of value 1
 * Return: Integer
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	else if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
