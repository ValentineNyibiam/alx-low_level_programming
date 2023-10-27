#include "main.h"

/**
 * set_bit - Sets the value of a given bit to 1 at a given index
 * @n: The number to set its bit to one
 * @index: The index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
