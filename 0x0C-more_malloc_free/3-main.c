#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(int *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int *a;
unsigned int size = 11;  /* Array size for range 0 to 10.*/

a = array_range(0, 10);
if (a == NULL)
{
printf("Failed to create array\n");
return (1);
}
simple_print_buffer(a, size);
free(a);
return (0);
}
