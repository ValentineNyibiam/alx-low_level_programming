#include <stdio.h>

/**
 * main - prints all the argumemts passed to it
 * @argc: number of command line arguments
 * @argv: an array of the command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
