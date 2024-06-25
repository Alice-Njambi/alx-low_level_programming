#include <stdio.h>
/**
* main - Entry point.
*
* Description: Program that prints alphabet in lowercase.
* Return: Zero, 0.
*/

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}

putchar('\n');

return 0;
}
