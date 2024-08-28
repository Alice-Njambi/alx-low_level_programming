#include "main.h"
#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers, starting with 1 and 2.
*
* Return: Always 0.
*/
int main(void)
{
int i;
unsigned long int a = 1, b = 2, next;

printf("%lu, %lu", a, b);

for (i = 2; i < 50; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

printf("\n");
return (0);
}
