#include "main.h"

/**
 * get_bit - Returns the value of a given bit at a given index
 * @index: The index starting from 0 of the bit you want to get
 * @n: The number to search from
 *
 * Return: The value of the bit atindex, or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
