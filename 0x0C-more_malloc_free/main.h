#ifndef MAIN_H
#define MAIN_H

/* standard libraries */
#include <stdlib.h>

/* prototypes */
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int _strlen(char *str);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
