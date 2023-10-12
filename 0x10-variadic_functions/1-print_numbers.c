#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @seperator: A pointer to the string to be printed
 * between the printed numbers
 * @n: the number of numbers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		
		printf("%d", va_arg(args, int));
		if (i == n - 1)
		{
			putchar('\n');
			break;
		}
		printf("%s", separator);
	}
	va_end(args);
}
