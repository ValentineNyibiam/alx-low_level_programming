#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to check for a character in
 * @c: character to check for
 *
 * Return: a pointer to the character else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}