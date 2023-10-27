#include "main.h"

/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int m;
	char *n;

	m = 1;
	n = (char *)&m;
	return (*n);
}
