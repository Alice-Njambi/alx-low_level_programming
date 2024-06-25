#include <stdio.h>

/**
 * Main- Entry point.
 *
 * Description: Program that prints the alphabet in lowercase.
 * Return: Always zero, 0.
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
