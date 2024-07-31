#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for _putchar, which prints a single character */
int _putchar(char c);

/* Function prototype for print_name, which prints a name using a function pointer */
void print_name(char *name, void (*f)(char *));

/* Function prototype for array_iterator, which executes a function on each array element */
void array_iterator(int *array, size_t size, void (*action)(int));


/* Function prototype for int_index, which searches for an integer in an array */
int int_index(int *array, int size, int (*cmp)(int));


#endif /* FUNCTION_POINTERS_H */
