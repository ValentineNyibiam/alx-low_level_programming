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
	size_t block_min = 0, index = 0;
	size_t block_max = jump_step;
	char *output;

	while (index < jump_step)
	{
		printf("Value checked array[%ld] = [%ld]\n", block_min, block_min);
		if (value >= array[block_min] && value <= array[block_max])
		{
			output = "Value found between indexes";
			printf("%s [%ld] and [%ld]\n", output, block_min, block_max);
			while (block_min <= block_max)
			{
				printf("Value checked array[%ld] = [%ld]\n", block_min, block_min);
				if (array[block_min] == value)
					return (block_min);
				block_min++;
			}
		}
		else
		{
			block_min += 3;
			block_max += 3;
		}
		index++;
	}
	return (-1);
}
