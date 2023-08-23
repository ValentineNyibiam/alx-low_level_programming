#include "main.h"
/**
 * print_array - Prints elements of an array of integers
 * @a: Name of the array
 * @n: Size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c < n - 1)
			printf(", ");
	}
	printf("\n");
}
