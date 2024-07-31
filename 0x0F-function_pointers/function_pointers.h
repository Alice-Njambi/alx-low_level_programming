#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for _putchar, which prints a single character */
int _putchar(char c);

/* Function prototype for print_name, which prints a name using a function pointer */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
