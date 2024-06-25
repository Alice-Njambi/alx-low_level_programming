#include <stdio.h>
/**
* main - entry point.
*
* Description: Program that prints all base 10 single digit numbers.
* Return: Zero,0.
*/
int main()
{
int i = 0;
while (i < 10) {
putchar(i + '0');
putchar('\n');
i++;
}

return (0);
}

