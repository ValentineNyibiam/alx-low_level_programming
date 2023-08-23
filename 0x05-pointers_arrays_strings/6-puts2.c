#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: Input of string type
 * Return: void
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 != 1)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
