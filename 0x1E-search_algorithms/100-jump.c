#include "search_algos.h"
/**
 * jump_search - searches for a value in sorted array of integers
 * using the jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * else if value is not present in array
 * or array is NULL, return -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t blockMin = 0, max = size - 1;
	size_t blockMx = jump_step;
	char *output;

	if (!array)
		return (-1);

	while (1)
	{
		printf("Value checked array[%lu] = [%d]\n", blockMin, array[blockMin]);
		if ((blockMx <= max && value <= array[blockMx]) || blockMx >= size)
		{
			output = "Value found between indexes";
			printf("%s [%lu] and [%lu]\n", output, blockMin, blockMx);
			while (blockMin <= blockMx)
			{
				printf("Value checked array[%lu] = [%d]\n", blockMin, array[blockMin]);
				if (array[blockMin] == value)
					return (blockMin);
				blockMin++;
				if (blockMin == size)
					return (-1);
			}
		}
		else
		{
			blockMin += jump_step;
			blockMx += jump_step;
		}
	}
	return (-1);
}
