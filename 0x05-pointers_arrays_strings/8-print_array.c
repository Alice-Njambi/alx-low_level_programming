#include <stdio.h>
#include "main.h"

/**
* print_array - prints n elements of an array of integers, followed by a new line.
* @a: pointer to the array of integers.
* @n: number of elements to print.
*
* Description: The function prints the elements of the array separated
* by commas and a space, followed by a new line.
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
