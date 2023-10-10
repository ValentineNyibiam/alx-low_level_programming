#include "dog.h"

/**
 * init_dog - intializes the variable of type struct dog
 * @d: the memory to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the inialized memory
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
