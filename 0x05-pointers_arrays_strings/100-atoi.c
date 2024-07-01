#include "main.h"
#include <limits.h> /* Include for INT_MAX and INT_MIN definitions.*/

/**
* _atoi - converts a string to an integer.
* @s: input string.
*
* Return: integer representation of the string.
*/
int _atoi(char *s)
{
int sign = 1;
unsigned int result = 0;
int overflow = 0;

/* Skip any non-digit characters.*/
while (*s && !(*s >= '0' && *s <= '9') && *s != '-' && *s != '+')
{
s++;
}

/* Process sign characters.*/
while (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -sign;
}
s++;
}

/* Convert characters to integer.*/
while (*s >= '0' && *s <= '9')
{
int digit = *s - '0';

/* Check for potential overflow*/
if (result > (unsigned int)(INT_MAX / 10) ||
(result == (unsigned int)(INT_MAX / 10) && digit > (INT_MAX % 10)))
{
overflow = 1;
break;
}

result = result * 10 + digit;
s++;
}

if (overflow)
{
/* Handle overflow according to sign.*/
return (sign == 1) ? INT_MAX : INT_MIN;
}

return (int)(result *sign);
}
