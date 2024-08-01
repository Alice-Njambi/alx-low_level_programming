#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - Prints numbers separated by a string and followed by a newline.
* @separator: The string to be printed between numbers.
* @n: The number of integers to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

/* Initialize the va_list variable args to point to the first variable argument */
va_start(args, n);

/* Loop through each argument and print it */
for (i = 0; i < n; i++)
{
/* Print the current number */
printf("%d", va_arg(args, int));

/* Print the separator if it's not the last number and separator is not NULL */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

/* Print a new line at the end */
printf("\n");

/* Clean up the va_list variable */
va_end(args);
}
