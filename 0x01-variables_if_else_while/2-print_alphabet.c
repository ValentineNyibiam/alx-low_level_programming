#include <stdio.h>
/**
 * main - Entry point
 * C program to print lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
