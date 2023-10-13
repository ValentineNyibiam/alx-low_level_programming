#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: A pointer to the string to be printed
 * between the printed numbers
 * @n: The number of numbers passed to the function
 * @...: The variable arguments passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(args);
}
