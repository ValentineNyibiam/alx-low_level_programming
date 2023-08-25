#include "main.h"
/**
 * *leet - Encodes a string into 1337
 * @inp: String input
 * Return: char
 */
char *leet(char *inp)
{
	int i;
	int j;
	char *txt = "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0; inp[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (inp[i] == txt[j])
			{
				inp[i] = code[j];
			}
		}
	}
	return (inp);
}
