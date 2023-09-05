#include "main.h"

/**
 * *create_array - Creates an array of characters
 * and initializes it with a specific character
 * @size: Determines the size of the array
 * @c: Character to be inputed
 * Return: A pointer to an array else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
