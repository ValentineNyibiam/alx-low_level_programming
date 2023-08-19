#include "main.h"
/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @c: The number of times to print '\' on the terminal
 *
 * Return: void
 */
void print_diagonal(int c)
{
	int m;
	int n;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= c; m++)
		{
			for (n = 1; n <= m; n++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
