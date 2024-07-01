#include "main.h"
#include <stdio.h>

/**
* print_rev - Prints a string in reverse followed by a new line.
* @s: The string to be printed in reverse.
*
* Return: void
*/
void print_rev(char *s)
{
int len = 0;
char *end = s;

/* Calculate the length of the string */
while (*end != '\0')
{
len++;
end++;
}

/* Print the string in reverse */
while (len > 0)
{
end--;
putchar(*end);
len--;
}

/* Print the new line character */
putchar('\n');
}
