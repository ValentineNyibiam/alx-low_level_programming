#include <stdio.h>
/**
 * main - Prints numbers from 1 to 100 with FizzBuzz
 *
 * Return: integer
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("%s", "FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
			printf("%d", n);
		if (!(n == 100))
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
