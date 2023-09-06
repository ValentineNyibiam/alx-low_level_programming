#include "main.h"
/**
 * *_strdup - Duplicates a string
 * @str: String input
 * Return: Pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s;
	int c, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	s = malloc(i * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		s[c] = str[c];
	s[c] = '\0';

	return (s);
}
