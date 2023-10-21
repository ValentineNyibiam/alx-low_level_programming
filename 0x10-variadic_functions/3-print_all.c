#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to
 * the function
 * @...: The list of variable arguments passed to
 * the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *f_str;

	i = 0;
	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				f_str = va_arg(args, char *);
				if (f_str == NULL)
					f_str = "(nil)";
				printf("%s", f_str);
				break;

			default:
				i++;
				continue;
		}
		if (format[i + 1])
			print_separator(format[i]);
		i++;
	}
	putchar ('\n');
	va_end(args);
}

/**
 * print_separator - Prints a sepatator to the stdout
 * based on a condition
 * @chr: Character that when encountered a separator
 * wil be printed to stdout
 */
void print_separator(char chr)
{
	switch (chr)
	{
		case 'c':
			printf(", ");
			break;
		case 's':
			printf(", ");
			break;
		case 'f':
			printf(", ");
			break;
		case 'i':
			printf(", ");
			break;
		default:
			return;
	}
}
