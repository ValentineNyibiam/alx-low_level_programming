#include <stdio.h>
/**
 * main - Entry point
 * C program to print lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
