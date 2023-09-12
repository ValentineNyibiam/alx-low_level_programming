#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: a pointer to a struct dog type (success), otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_new_dog;

	my_new_dog = malloc(sizeof(dog_t));
	if (my_new_dog == NULL)
		return (NULL);

	my_new_dog->name = malloc((sizeof(char) * strlen(name)) + 1);
	if (my_new_dog->name == NULL)
	{
		free(my_new_dog);
		return (NULL);
	}

	my_new_dog->owner = malloc((sizeof(char) * strlen(owner)) + 1);
	if (my_new_dog->owner == NULL)
	{
		free(my_new_dog);
		free(my_new_dog->owner);
		return (NULL);
	}
	strcpy(my_new_dog->name, name);
	strcpy(my_new_dog->name, owner);
	my_new_dog->age = age;

	return (my_new_dog);
}
