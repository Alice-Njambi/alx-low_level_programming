#include "main.h"

/**
* print_line - Prints a line of underscores followed by a newline
* @n: Number of times '_' should be printed
*
* Return: Nothing
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
/* If n is 0 or negative, just print a newline.*/
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
/* Print '_' n times.*/
_putchar('_');
}
/* Print newline after printing the line of underscores.*/
_putchar('\n'); 
}
}
