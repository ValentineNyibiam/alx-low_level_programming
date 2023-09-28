#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string of which its length will be calculated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int count;

	count = 0;
	if (*s == '\0')
		return (0);
	s++;
	count++;
	return (count + _strlen_recursion(s));
}
