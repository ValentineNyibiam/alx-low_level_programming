#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: Input of integer type
 *
 * Return: 1 if digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
