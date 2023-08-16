#include "main.h"
/**
 * print_alphabet - Prints the alphabets in lowercase
 * return: void (success)
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
