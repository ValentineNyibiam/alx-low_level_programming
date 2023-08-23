#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: Input of string type
 * Return: void
 */
void puts_half(char *str)
{
	int c;
	int v;
	int length_of_the_string = 0;

	for (c = 0; str[c] != '\0'; c++)
		length_of_the_string++;

	if (length_of_the_string % 2 == 1)
	{
		n = (length_of_the_string - 1) / 2;
		while (str[v] != '\0')
		{
			_putchar(str[v]);
			v++;
		}
	}
	else
	{
		v = length_of_the_string / 2;
		while (str[v] != '\0')
		{
			_putchar(str[v]);
			v++;
		}
	}
	_putchar('\n');
}
