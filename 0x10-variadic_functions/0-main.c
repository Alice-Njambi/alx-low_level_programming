#include <stdio.h>
#include "variadic_functions.h"

/**
* main - Check the code.
*
* Return: Always 0.
*/
int main(void)
{
/* Declare a variable to store the result of sum_them_all */
int sum;

/* Call sum_them_all with 2 arguments and store the result in sum */
sum = sum_them_all(2, 98, 1024);

/* Print the result (should print 1122) */
printf("%d\n", sum);

/* Call sum_them_all with 4 arguments and store the result in sum */
sum = sum_them_all(4, 98, 1024, 402, -1024);

/* Print the result (should print 500) */
printf("%d\n", sum);

/* Return 0 to indicate successful execution */
return (0);
}
