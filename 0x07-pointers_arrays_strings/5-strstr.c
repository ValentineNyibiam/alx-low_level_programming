#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: string to be checked in
 * @needle: substring to be checked for
 *
 * Return: a pointer to the beginning of the located string
 * else NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0')
		{
			if (needle[i] == needle[j])
				return (needle + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
