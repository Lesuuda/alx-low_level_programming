#ifndef SORT_H
#define SORT_H

#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
#endif
