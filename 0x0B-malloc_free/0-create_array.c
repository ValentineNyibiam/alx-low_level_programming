#include "main.h"

/**
 * *create_array - creates an array of character
 * and intializes it with a specific character
 * @size: the size of the array to be initialized
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array else
 * NULL if the function fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
