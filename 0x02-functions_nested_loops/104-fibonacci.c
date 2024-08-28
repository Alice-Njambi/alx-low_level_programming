#include <stdio.h>

/**
* main - Prints the first 98 Fibonacci numbers, starting with 1 and 2,
*        separated by a comma followed by a space.
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int a = 1, b = 2;
unsigned long int a_head, a_tail, b_head, b_tail;
unsigned long int overflow;
int count;
unsigned long int next_tail, next_head;

printf("%lu, %lu", a, b);

for (count = 2; count < 92; count++)
{
unsigned long int next = a + b;
printf(", %lu", next);
a = b;
b = next;
}

a_head = a / 1000000000;
a_tail = a % 1000000000;
b_head = b / 1000000000;
b_tail = b % 1000000000;

for (; count < 98; count++)
{
overflow = (a_tail + b_tail) / 1000000000;
next_tail = (a_tail + b_tail) % 1000000000;
next_head = a_head + b_head + overflow;

printf(", %lu%09lu", next_head, next_tail);

a_head = b_head;
a_tail = b_tail;
b_head = next_head;
b_tail = next_tail;
}

printf("\n");
return (0);
}
