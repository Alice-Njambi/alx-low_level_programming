#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to be printed in binary.
*
* Return: Nothing.
*/
void print_binary(unsigned long int n)
{
/* Base case: if n is 0, print '0' */
if (n == 0)
{
_putchar('0');
return;
}

/* Recursively print the higher-order bits first */
if (n >> 1)
print_binary(n >> 1);

/* Print the current bit (the lowest bit of n) */
_putchar((n & 1) ? '1' : '0');
}
