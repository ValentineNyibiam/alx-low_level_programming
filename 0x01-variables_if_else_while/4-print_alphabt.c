#include <stdio.h>
/**
 * main - Entry point
 * C program that prints alphabets
 * Except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	if (n != 'e' && n != 'q')
		putchar(n);
	putchar('\n');
	return (0);
}
