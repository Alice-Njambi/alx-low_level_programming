#include "main.h"

/**
* fizz_buzz - prints numbers from 1 to 100 with specific rules
*              (multiples of 3 print Fizz, multiples of 5 print Buzz,
*              multiples of both print FizzBuzz)
*/
void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if (i % 3 == 0)
{
_putchar('F');
_putchar('i');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else if (i % 5 == 0)
{
_putchar('B');
_putchar('u');
_putchar('z');
_putchar('z');
_putchar(' ');
}
else
{
/* Convert the number to string and print each digit */
int num = i;
if (num >= 10)
{
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
else
{
_putchar(num + '0');
}
_putchar(' ');
}
}

_putchar('\n');
}
