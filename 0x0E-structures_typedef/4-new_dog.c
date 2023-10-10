#include "dog.h"

/**
 * _strlen - determines the length of a string excluding the null byte
 * @str: a pointer to the string which its length will be determined
 *
 * Return: the length of str
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * *_strcpy - copies a string to an empty buffer including the NULL byte
 * @src: a pointer to the string to be copied
 * @dest: a pointer to the buffer where the string will be copied to
 *
 * Return: a pointer to the copied string else NULL
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	if (src == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the dog_t, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declare variables */
	dog_t *new_dog;
	int namelen, ownerlen;

	/* determine the length of name and owner */
	namelen = _strlen(name) + 1;
	ownerlen = _strlen(owner) + 1;

	/* allocate memory for name, owner and new_dog, then check if allocation is successful */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * namelen);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * ownerlen);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}

	/* initialize the new dog */
	_strcpy(name, new_dog->name);
	new_dog->age = age;
	_strcpy(owner, new_dog->owner);
	return (new_dog);
}
