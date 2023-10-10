#ifndef DOG_H
#define DOG_H

/* struct declaratons */

/**
 * struct dog - a dog's information
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a struct that contains the information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;



/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>

#endif /* DOG_H */
