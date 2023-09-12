#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - contains dog information
 * @name: input of string type
 * @age: input of integer type
 * @owner: input of string type
 *
 * Description: contains the name, age and owner
 * of a particular dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for type struct dog
 */
typedef struct dog dog_t;

/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
