#include "main.h"

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
	unsigned int i, j, str_len2, str_len1, mem_to_alloc, n_edge = n;

	str_len1 = _strlen(s1); /* checks the length of s1 and s2 */
	str_len2 = _strlen(s2);

	if (s1 == NULL) /* check if NULL passed */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n_edge <= 0) /* account for edge cases of n */
		return (NULL);
	if (n_edge >= str_len2)
		n_edge = str_len2;

	mem_to_alloc = str_len1 + n_edge + 1; /* allocate memory dynamically */
	alloc_mem = malloc(sizeof(char) * mem_to_alloc);

	if (alloc_mem == NULL) /* check if allocation was successful */
		return (NULL);

	for (i = 0; i < str_len1; i++) /* initialize allocated memory */
		alloc_mem[i] = s1[i];
	for (j = 0; j < n_edge; j++, i++)
		alloc_mem[i] = s2[j];
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
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i);
}
