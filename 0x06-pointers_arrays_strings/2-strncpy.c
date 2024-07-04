#include "main.h"

/**
* _strncpy - copies a string
* @dest: the destination string
* @src: the source string
* @n: maximum number of bytes to be used from src
*
* Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy src to dest, up to n bytes or until the end of src */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Pad the remaining bytes in dest with '\0' if necessary */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
