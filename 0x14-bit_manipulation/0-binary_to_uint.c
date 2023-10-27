#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The number(Success), else 0(Failure)
 */
unsigned int binary_to_uint(const char *b)
{
	/* Declare variables */
	unsigned int pow, b_len, uint = 0, i = 0;

	/* Check if b is NULL */
	if (b == NULL)
		return (0);

	/* Check for the length of the string */
	b_len = _strlen(b) - 1;

	/* Loop through b and convert to binary */
	for (pow = b_len; b[i] != '\0'; i++, pow--)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			uint = (uint << 1) | (b[i] - '0');
		}
		else
			return (0);
	}

	return (uint);
}

/**
 * _strlen - Returns the length of a string
 * @str: String to calculate its length
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i + 1);
}
