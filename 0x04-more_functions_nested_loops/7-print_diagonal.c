#include "main.h"

/**
* print_diagonal - Prints a diagonal line of '\' characters followed by a newline
* @n: Number of '\' characters to print
*
* Return: Nothing
*/
void print_diagonal(int n)
{
int i, j;

/* Check if n is 0 or negative */
if (n <= 0)
{
_putchar('\n');  /* If n is 0 or negative, print just a newline */
}
else
{
/* Loop through each line to print */
for (i = 0; i < n; i++)
{
/* Print leading spaces before the '\' character */
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');  /* Print the '\' character */
_putchar('\n');  /* Print newline after each '\' character */
}
}
}
