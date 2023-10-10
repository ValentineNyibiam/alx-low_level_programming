#include "dog.h"

/**
 * free_dog - frees memory allocated for dogs
 * @d: a pointer to the memory to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NUll)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
