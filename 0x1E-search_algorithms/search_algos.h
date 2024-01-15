#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_mod(int *array, int min, int max, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H_ */
