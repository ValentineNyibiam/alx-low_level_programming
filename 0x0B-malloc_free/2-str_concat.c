#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: a pointer to concatenated string else NULL
 */
char *str_concat(char *s1, char *s2)
{
	int str_len1, str_len2, str_len_total, i, i2;
	char *alloc_mem;

	/* check if s1 or s2 is NULL */
	if (s1 == NULL || s2 == NULL)
		return (NULL);

	/* find the length of both strings */
	str_len1 = _strlen(s1);
	str_len2 = _strlen(s2);
	str_len_total = str_len1 + str_len2;

	/* allocate memory for holding both strings */
	alloc_mem = malloc((sizeof(char) * str_len_total) + 1);

	/* check if allocated memory is NULL */
	if (alloc_mem == NULL)
		return (NULL);

	/* copy s1 and s2 into the allocated memory */
	for (i = 0, i2 = 0; i < str_len_total; i++)
	{
		if (i < str_len1)
			alloc_mem[i] = s1[i];
		else
			alloc_mem[i] = s2[i2++];
	}
	alloc_mem[i] = '\0';

	return (alloc_mem);
}

/**
 * _strlen - calculates the length of a string
 * @str: input string of which length will be calculated
 *
 * Return: length of input string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
