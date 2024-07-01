#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: input string.
*
* Return: integer representation of the string.
*/
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int started = 0;

while (*s)
{
if (*s == '-')
{
sign = -sign;
}
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
started = 1;
}
else if (started)
{
break;
}
s++;
}

return (result *sign);
}
