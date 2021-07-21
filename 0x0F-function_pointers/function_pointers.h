#ifndef FUNCT_POINTERS
#define FUNCT_POINTERS

#include <stdio.h>

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* FUNCT_POINTERS */
