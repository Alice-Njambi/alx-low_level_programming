#include <stdio.h>

/**
 * main- Entry point.
 *
 * Description: Program to print alphabet in lowercase.
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
