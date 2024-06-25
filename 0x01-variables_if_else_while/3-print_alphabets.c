#include <stdio.h>
/**
* main - entry point.
*
* Description: Program that prints alphabets in lowercase, then in uppercase.
* Return: Zero,0.
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

putchar('\n');

return (0);
}
