#include <stdio.h>
/**
 * main - Entry point
 * C program to print numbers in base 10
 * followed by commas and spaces
 * Using the putchar functions
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		n++;
	}
	putchar('\n');
	return (0);
}
