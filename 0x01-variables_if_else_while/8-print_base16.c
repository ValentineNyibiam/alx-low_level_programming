#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints base 16 numbers in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (n = 'a' ; n <= 'f' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
