#include "main.h"
#include <stddef.h>  /* Include this header for NULL */

/**
* binary_to_uint - Converts a binary number to an unsigned int.
* @b: Pointer to a string of 0 and 1 characters.
*
* Return: The converted number, or 0 if there are invalid characters
*         in the string or if b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i = 0;

if (b == NULL)
{
return (0);
}

while (b[i])
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}

num = num << 1; /* Shift left by 1 to make space for the next bit */
num += b[i] - '0'; /* Add the current bit to the number */

i++;
}

return (num);
}
