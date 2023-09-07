#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the value to use in filling the memory spaces
 * @n: the frequency to which the memory will filled
 *
 * Return: a pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

