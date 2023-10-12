#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user depending on the operato passed
 * @s: a pointer to the charecter(operator) to be used to
 * determine which operation to perform
 *
 * Return: a pointer to a function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] =
	{
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
    	};

	for (i = 0; ops->op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
