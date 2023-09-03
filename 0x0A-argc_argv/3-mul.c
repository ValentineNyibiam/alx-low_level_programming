#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: An array of the arguments passed
 * Return: 1 for an error else 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int res;
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		res = a * b;
		printf("%d\n", res);
	}
	return (0);
}
