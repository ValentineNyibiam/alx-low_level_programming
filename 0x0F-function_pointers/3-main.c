#include "3-calc.h"

/**
 * main - entry point
 *
 * Return: 0 always(success)
 */
int main(int argc, char *argv[])
{
	int operand1, operand2, res;
	int (*operator)(int, int);
	char a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	a = *argv[2];
	if ((a == '/' || a == '%') && operand2 == 0)
	{
		printf("Error");
		exit(100);
	}

	res = operator(operand1, operand2);
	printf("%d\n", res);

	return (0);
}
