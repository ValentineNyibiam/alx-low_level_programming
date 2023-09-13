#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: an array of integers
 * @size: size of the array
 * @cmp: a pointer to the function that compares values
 *
 * Return: the index of the first element for which the cmp
 * does not return 0, -1 if no element matches and size is
 * less than of equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	while (i < size)
	{
		while (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
