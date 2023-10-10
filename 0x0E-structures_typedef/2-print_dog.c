#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: a pointer to the struct dog to be printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s \nAge: %f \nOwner: %s", d->name, d->age, d->owner);
}
