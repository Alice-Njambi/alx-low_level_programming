#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: the destination string
* @src: the source string
* @n: maximum number of bytes to be used from src
*
* Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}

/* Append src string to dest string using at most n bytes from src */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* Add the terminating null byte */
dest[i] = '\0';

return (dest);
}
