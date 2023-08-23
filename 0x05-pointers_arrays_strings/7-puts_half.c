#include "main.h"
/**
 * puts_half - Prints the second half of a string
 * @str: Input of string type
 * Return: void
 */
void puts_half(char *str)
{
	int c;
	int i;
	int length_of_the_string = 0;

	for (c = 0; str[c] != '\0'; c++)
		length_of_the_string++;

	if (length_of_the_string % 2 == 1)
	{
		i = (length_of_the_string - 1) / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = length_of_the_string / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
