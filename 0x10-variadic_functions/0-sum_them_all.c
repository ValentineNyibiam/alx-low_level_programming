#include "variadic_functions.h"

/**
 * sum_them_all - Calculates the sum of all its parameters
 * @n: The number of arguments to be passed by user
 *
 * Return: The sum of all the values that will passed to the function
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		res += va_arg(args, int);
	}
	va_end(args);
	return (res);
}
