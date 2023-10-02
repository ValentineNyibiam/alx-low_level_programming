#include <stdio.h>

/**
 * main - prints it's name
 * @argc: number of command line arguments
 * passed to the program
 * @argv: an array of the command line arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
