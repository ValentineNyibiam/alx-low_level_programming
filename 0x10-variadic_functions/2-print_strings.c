#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: A pointer to the string to be printed
 * between the printed strings
 * @n: the number of strings passed to the function
 * @...: The variable arguments to be passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar ('\n');
	va_end(args);
}
