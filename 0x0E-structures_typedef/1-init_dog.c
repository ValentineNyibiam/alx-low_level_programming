#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initializes a struct dog variable
 * @d: a pointer to a struct dog type
 * @name: input of string type
 * @age: input of integer type
 * @owner: input of string type
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog **e;
	
	e = malloc(sizeof(struct dog));
	if (e == NULL)
		printf("Failed");
	e = &d;
	(**e).name = name;
	(**e).age = age;
	(**e).owner = owner;
}
