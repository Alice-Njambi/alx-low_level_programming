#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: the string to capitalize
*
* Return: pointer to the resulting string
*/
char *cap_string(char *str)
{
int i = 0;

/* Capitalize the first letter */
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 'a' - 'A';

/* Iterate through the string */
while (str[i] != '\0')
{
/* Check for separators */
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
{
/* Capitalize the next letter */
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 'a' - 'A';
}
i++;
}

return (str);
}
