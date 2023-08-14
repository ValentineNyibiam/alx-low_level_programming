#include <stdio.h>
/**
 * main - Entry point
 * C program to print numbers in base 10 
 * Using the putchar functions
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');
	return (0);
}
