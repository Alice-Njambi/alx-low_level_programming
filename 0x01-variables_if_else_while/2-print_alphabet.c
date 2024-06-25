#include <stdio.h>

/**
 * Main entry.
 *
 * Description: Program that prints the alphabet in lowercase.
 */
int main(void)
{
char letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
