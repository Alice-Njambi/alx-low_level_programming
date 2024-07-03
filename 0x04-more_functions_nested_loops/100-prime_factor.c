#include <stdio.h>
#include <math.h>
#include "main.h"

/**
* largest_prime_factor - Finds the largest prime factor of a given number
* @n: The number to find the largest prime factor of
*
* Return: The largest prime factor of n
*/
long largest_prime_factor(long n)
{
long largest_factor = -1;
int i;

/* Check for number of 2s.*/
while (n % 2 == 0)
{
largest_factor = 2;
n /= 2;
}

/* n must be odd at this point, so we can skip even numbers.*/
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_factor = i;
n /= i;
}
}

/* This condition is to handle the case when n is a prime number greater than 2.*/
if (n > 2)
largest_factor = n;

return largest_factor;
}

int main(void)
{
long number = 612852475143;
long largest_prime = largest_prime_factor(number);

printf("%ld\n", largest_prime);

return 0;
}
