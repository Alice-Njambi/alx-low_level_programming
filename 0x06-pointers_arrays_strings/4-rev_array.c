#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: the array of integers
* @n: the number of elements in the array
*
* Return: void
*/
void reverse_array(int *a, int n)
{
int i, temp;

/* Swap elements from start to end and end to start */
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
