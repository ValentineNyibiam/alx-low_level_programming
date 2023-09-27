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
	int i = 0;

	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		s++;
	}
	return (s);
}
