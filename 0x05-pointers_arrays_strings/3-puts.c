#include "main.h"
/**
 * _puts - Prints a string to the stdout
 * @s: Input of string type
 * Return: void
 */
void _puts(char *str)
{
	int c;

	for(c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}
