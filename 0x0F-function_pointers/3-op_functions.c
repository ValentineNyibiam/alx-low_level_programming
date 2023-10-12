#include "3-calc.h"

/**
 * op_add - finds the sum of two values
 * @a: first operand
 * @b: second operand
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - finds the product of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds the quotient of two numbers
 * @a: the dividend of the operation
 * @b: the divisor of the operation
 *
 * Return: the qoutiont of the opetaration
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the modulo of two numbers
 * @a: first operand
 * @b: second operand
 *
 * Return: the modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
