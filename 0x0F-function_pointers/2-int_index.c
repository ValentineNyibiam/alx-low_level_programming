#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array where an integer will be searched for
 * @size: the number of elements in the array
 * @cmp: a pointer to the funtion to be used to calculate values
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * if no element matches or size <= 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
