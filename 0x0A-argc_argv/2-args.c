#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of strings which are the arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
