#include "main.h"

/**
* _strcpy - copies the string pointed to by src.
* @dest: pointer to the buffer where the string is copied to.
* @src: pointer to the source string.
*
* Description: Copies string pointed to by scr, including the null byte.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;

/* Copy each character from src to dest, including the null terminator*/
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0'; /* Add the null terminator at the end.*/

return (dest);
}
