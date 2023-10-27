#include "main.h"

/**
 * flip_bits - Determines the number of bits you would need to flip
 * to get to another number
 * @n: First number
 * @m: Second number
 *
 * Return: Returns the number of bits you would need to flip
 * to get to another number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	while (i >= 0)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
		i--;
	}

	return (count);
}
