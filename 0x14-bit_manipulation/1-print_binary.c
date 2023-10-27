#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int n;
	unsigned int i = 1;

	n = 1;
	for (; i <= power; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print its binary representation
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int check, mask;
	char flag;

	flag = 0;
	mask = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (mask != 0)
	{
		check = n & mask;
		if (check == mask)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || mask == 1)
			_putchar('0');
		mask >>= 1;
	}
	_putchar('\n'); /* Print a newline character */
}
