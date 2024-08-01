#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - Prints strings separated by a string and followed by a newline.
* @separator: The string to be printed between the strings.
* @n: The number of strings to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

/* Initialize the va_list variable args to point to the first variable argument */
va_start(args, n);

/* Loop through each argument and print it */
for (i = 0; i < n; i++)
{
/* Retrieve the next argument from the list */
str = va_arg(args, char*);

/* Print (nil) if the string is NULL, otherwise print the string */
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

/* Print the separator if it's not the last string and separator is not NULL */
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
