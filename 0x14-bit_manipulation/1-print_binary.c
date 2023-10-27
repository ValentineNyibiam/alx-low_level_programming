#include "main.h"

/**
 * _power - calculates base raised to power
 * @base: Base
 * @power: Power
 *
 * Return: The result of base raised to power
 */
unsigned long int _power(unsigned int base, unsigned int power)
{
	unsigned long int res = 1;
	unsigned int i;

	for (i = 1; i <= power; i++)
		res *= base;
	return (res);
}

/**
 * print_binary - Prints a number in binary
 * @n: Number to print in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _power(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
