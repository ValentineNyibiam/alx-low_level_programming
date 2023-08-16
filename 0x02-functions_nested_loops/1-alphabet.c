#include "main.h"
/**
 * main - Entry point
 * description - A function that prints lowercase alphabets
 * return - 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
