#include "main.h"
/**
 * *_strncat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Limit of concatenation
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destl = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destl++;
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[destl + i] = src[i];
	}
	dest[destl + i] = '\0';
	return (dest);
}
