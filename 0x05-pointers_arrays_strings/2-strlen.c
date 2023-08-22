#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: Input of string type
 *
 * return: int
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
