#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
