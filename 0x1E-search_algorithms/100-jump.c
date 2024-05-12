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
	size_t blockMin = 0, index = 0;
	size_t blockMx = jump_step;
	char *output;

	if (!array)
		return (-1);

	while (index < jump_step + 1)
	{
		printf("Value checked array[%ld] = [%d]\n", blockMin, array[blockMin]);
		if ((value >= array[blockMin] && value <= array[blockMx]) || blockMx > size)
		{
			output = "Value found between indexes";
			printf("%s [%ld] and [%ld]\n", output, blockMin, blockMx);
			while (blockMin <= blockMx)
			{
				printf("Value checked array[%ld] = [%ld]\n", blockMin, blockMin);
				if (array[blockMin] == value)
					return (blockMin);
				blockMin++;
				if (blockMin == size)
					break;
			}
		}
		else
		{
			blockMin += 3;
			blockMx += 3;
		}
		index++;
	}
	return (-1);
}
