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


/* prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
