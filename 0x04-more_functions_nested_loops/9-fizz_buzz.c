#include <stdio.h>
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
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}

printf("\n");
}

