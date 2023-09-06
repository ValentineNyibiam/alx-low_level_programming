#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: First string input
 * @s2: Second string input
 * Return: A pointer else NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (s == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (i + j + 1); c++)
	{
		if (c < i)
			s[c] = s1[c];
		else
			s[c] = s2[d++];
	}
	return (s);
}
