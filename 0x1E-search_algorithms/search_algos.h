#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* standard header files */
#include <stddef.h>
#include <stdio.h>
#include <math.h>

/* user defined functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
