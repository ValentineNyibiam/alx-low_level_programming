#include "main.h"
#include <stdio.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * @n: the number of bytes of s2 to be concatenated
 *
 * Return: a pointer to an array of characters
 * else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *alloc_mem;
	unsigned int i, j, str_len1, mem_to_alloc;

	/* checks the length of s1 and s2 */
	str_len1 = _strlen(s1);

	/* check if NULL passed */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* allocate memory dynamically */
	mem_to_alloc = str_len1 + n;
	alloc_mem = malloc((sizeof(char) * mem_to_alloc) + 1);

	/* check if allocation was successful */
	if (alloc_mem == NULL)
		return (NULL);
	printf("%d\n", n);
	/* initialize allocated memory */
	for (i = 0, j = 0; i < mem_to_alloc; i++)
	{
		if (i < str_len1)
			alloc_mem[i] = s1[i];
		else
		{
			alloc_mem[i] = s2[j++];
		}
	}
	alloc_mem[i] = '\0';

	return (alloc_mem);
}

/**
 * _strlen - calcutates the length of a string
 * @str: pointer to the string whose length
 * will be calculated
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
