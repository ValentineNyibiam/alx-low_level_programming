#include "main.h"
/**
 * print_line - Prints a line on the terminal
 * @n: The number of times the character '_' should be printed
 *
 * Return:void
 */
void print_line(int n)
{
	int o;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (o = 1; o <= n; o++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
