#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: starting number
*
* Description: This function prints all natural numbers from n to 98,
*              each number separated by a comma and space.
*/
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}
printf("\n");
}

