#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *
 * @i: Input value type integer
 *
 * Return: Last digit
 */
int print_last_digit(int i)
{
	int res;

	res = i % 10;
	if (res < 0)
	{
		_putchar(-res + 48);
		return (-res);
	}
	else
	{
		_putchar(res + 48);
		return (res);
	}
}
