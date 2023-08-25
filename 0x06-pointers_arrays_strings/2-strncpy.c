#include "main.h"
/**
 * *_strncpy - Copies a string from a source
 * to a destination
 * @src: String source
 * @dest: String dest
 * @n: Bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
