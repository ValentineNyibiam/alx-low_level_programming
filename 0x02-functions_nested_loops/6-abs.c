#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 *
 * @i: input of type integer
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
