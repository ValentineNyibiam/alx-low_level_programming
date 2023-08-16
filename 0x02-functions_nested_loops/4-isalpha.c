#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character
 * @c: The character in ASCII code
 * Return: 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
