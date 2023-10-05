#ifndef MAIN_H
#define MAIN_H

/* standard libraries */
#include <stddef.h>
#include <stdlib.h>

/* prototypes */
char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int _strlen(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /* MAIN_H */
