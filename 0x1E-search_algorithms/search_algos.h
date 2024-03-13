#ifndef __SEARCH_ALGOS__H
#define __SEARCH_ALGOS__H
#include <stdio.h>
#include <math.h>


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif /*__SEARCH_ALGOS__H*/
