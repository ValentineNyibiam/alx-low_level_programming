#include <stdio.h>
/**
 * main - Entry point
 * C program to print lowercase alphabets
 * In reverse order
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
