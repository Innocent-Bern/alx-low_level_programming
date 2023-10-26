#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stddef.h>
#include <stdio.h>
#include <math.h>
#define min

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_func(int *array, int upper, int lower);
int exponential_search(int *array, size_t size, int value);
#endif
