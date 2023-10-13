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
				printf("%c, ", va_arg(args, int));
				break;

			case 'i':
				printf("%d, ", va_arg(args, int));
				break;
			
			case 'f':
				printf("%f, ", va_arg(args, double));
				break;

			case 's':
				f_str = va_arg(args, char *);
				if (f_str == NULL)
					f_str = "(nil)";
				else
					printf("%s", f_str);
				break;
			default:
				i++;
				continue;
		}
		i++;
	}
	putchar ('\n');
	va_end(args);
}
