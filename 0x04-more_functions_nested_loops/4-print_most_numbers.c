#include "main.h"

/**
* print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4
*
* Return: Nothing
*/
void print_most_numbers(void)
{
char numbers[] = "01356789\n";
char *ptr = numbers;

while (*ptr)
{
_putchar(*ptr);
ptr++;
}
}
