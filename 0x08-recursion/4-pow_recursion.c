#include "main.h"
/**
 * _pow_recursion - returns the power of a number
 * to another number
 * @x: Integer input which will bw the base number
 * @y: Integer input which will be the power
 * Return: An integer result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
