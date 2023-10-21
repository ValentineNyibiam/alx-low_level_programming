#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum numer of coins to make change
 * for an amount of money
 * @argc: Number of arguments passed to the program
 * @argv: An array of the arguments passed to the program
 *
 * Returnin: 0 (Success), 1 failure
 */
int main(int argc, char *argv[])
{
	int i, change_count = 0, cents = 0;
	int coin_value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_value[i])
		{
			cents -= coin_value[i];
			change_count++;
		}
	}
	printf("%d\n", change_count);

	return (0);
}
