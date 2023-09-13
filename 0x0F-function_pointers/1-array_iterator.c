#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: a pointer to the function to be executed
 * @size: size of the array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
