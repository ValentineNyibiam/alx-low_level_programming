#include "main.h"
/**
 * print_square - Prints a square
 * @size: the width and length of square
 *
 * return: void
 */
void print_square(int size)
{
	int l, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= size; l++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
