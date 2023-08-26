#include "main.h"
/**
 * *rot13 - Encodes a string using the rot13 algorithm
 * @str: String input
 * Return: char
 */
char *rot13(char *str)
{
	int i, c;
	char *txt = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *code = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (c = 0; txt[c] != '\0'; c++)
		{
			if (str[i] == txt[c])
			{
				str[i] = code[c];
				break;
			}
		}
	}
	return (0);
}
