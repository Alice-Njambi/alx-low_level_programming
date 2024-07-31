#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its parameters.
* @n: The number of parameters.
*
* Return: The sum of all parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
/* Declare a variable to hold the list of variable arguments */
va_list args;

/* Declare a variable to keep track of the sum and initialize it to 0 */
unsigned int i, sum = 0;

/* Initialize the va_list variable args to point to the first variable argument */
va_start(args, n);

/* Loop through each argument in the list */
for (i = 0; i < n; i++)
{
/* Retrieve the next argument from the list and add it to the sum */
sum += va_arg(args, int);
}

/* Clean up the va_list variable */
va_end(args);

/* Return the total sum */
return (sum);
}
