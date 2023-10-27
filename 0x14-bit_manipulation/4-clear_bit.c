#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at given index
 * @n: Pointer to the number to manipulate its bits
 * @index: Index at which bit will be set to 0
 *
 * Return: 1(Success), -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
