#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: Input of string type
 * Return: void
 */
void print_rev(char *s)
{
	int v;
	int count = 0;

	for (v = 0; s[v] != '\0'; v++)
		count++;
	for (v = count - 1; v >= 0; v--)
		_putchar(s[v]);
	_putchar('\n');
}
