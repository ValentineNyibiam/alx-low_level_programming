#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabets
 * ten times on different lines
 * return: void (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int o;

	for (n = 0; n < 10; n++)
	{
		for (o = 97; o <= 122; o++)
		{
			_putchar(o);
		}
		_putchar('\n');
	}
}
