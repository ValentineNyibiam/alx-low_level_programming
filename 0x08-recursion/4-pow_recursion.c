#include "main.h"

/**
 * _pow_recursion - returns the value of a number raised
 * to the power of another number
 * @x: the base number
 * @y: the power of the base
 *
 * Return: -1 if y is lower than 0,
 * else the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
