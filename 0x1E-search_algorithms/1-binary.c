#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * using the binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located,
 * else if value is not present in array or if array is NULL,
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, middle, range;
	int right = size - 1;

	while (left <= right)
	{
		range = left;
		printf("Searching in array: ");
		while (range <= right)
		{
			if (range == right)
				printf("%d\n", array[range]);
			else
				printf("%d, ", array[range]);
			range++;
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
