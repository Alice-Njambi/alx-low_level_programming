#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description: Program that sprints all base 10 single digit numbers from 0.
 * Return: Zero, 0.
 */
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

putchar('\n');
return (0);
}
