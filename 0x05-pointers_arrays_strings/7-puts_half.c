#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string, followed by a new line.
* @str: input string.
*
* Description: The function prints the second half of the string.
* If the number of characters is odd, it prints the last
* (length_of_the_string - 1) / 2 characters.
*/
void puts_half(char *str)
{
int length = 0, i, n;

while (str[length] != '\0')
length++;

if (length % 2 == 0)
{
n = length / 2;
}
else
{
n = (length + 1) / 2;
}

for (i = n; str[i] != '\0'; i++)
{
putchar(str[i]);
}

putchar('\n');
}
