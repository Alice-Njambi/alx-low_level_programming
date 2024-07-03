#include "main.h"

/**
* more_numbers - Prints numbers from 0 to 14, ten times
*
* Return: Nothing
*/
void more_numbers(void)
{
int i, j;

/* Outer loop runs 10 times */
for (i = 0; i < 10; i++)
{
/* Inner loop runs from 0 to 14 */
for (j = 0; j <= 14; j++)
{
/* Print the tens digit if the number is >= 10 */
if (j >= 10)
{
_putchar((j / 10) + '0');
}
/* Print the units digit */
_putchar((j % 10) + '0');
}
/* Print a newline after each sequence */
_putchar('\n');
}
}
