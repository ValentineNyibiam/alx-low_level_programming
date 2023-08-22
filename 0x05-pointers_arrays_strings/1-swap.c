#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: First input of integer type
 * @b: Second input of integer type
 * return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
