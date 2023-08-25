#include "main.h"
/**
 * *string_toupper - Changes all lowercase letters of a string
 * to upper
 * @inp: Input string
 * Return: char
 */
char *string_toupper(char *inp)
{
	int i;

	for (i = 0; inp[i] != '\0'; i++)
	{
		if (inp[i] >= 97 && inp[i] <= 122)
		{
			inp[i] -= 32;
		}
	}
	return (inp);
}
