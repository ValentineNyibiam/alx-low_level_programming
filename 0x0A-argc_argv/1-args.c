#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the number of arguments passed to it
 * @argc: Number of values in argv
 * @argv: An array of the arguments passed to the program
 * Return: Integer
 */
int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	else
		printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
