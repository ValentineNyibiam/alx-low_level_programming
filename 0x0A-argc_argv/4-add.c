#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds poaitive numbers
 * @argc: number of command line arguments
 * @argv: an array of command line arguments
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int n, d, res = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (n = 1; n < argc; n++)
		{
			for (d = 0; argv[n][d] != '\0'; d++)
			{
				if (argv[n][d] < '0' || argv[n][d] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res += atoi(argv[n]);
		}
		printf("%d\n", res);
	}

	return (0);
}
