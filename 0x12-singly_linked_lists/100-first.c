#include <stdio.h>

/**
 * first - Function executed before main
 * Return: Nothing.
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
