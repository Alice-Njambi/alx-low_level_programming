#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

/* Prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Prototype for the array_iterator function */
void array_iterator(int *array, size_t size, void (*action)(int));


#endif /* MAIN_H */
