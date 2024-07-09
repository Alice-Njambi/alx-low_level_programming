#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: The string to search
* @c: The character to locate
*
* Return: Pointer to the first occurrence of the character c in the string s,
*         or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;
s++;
}

/* Check for '\0' (end of string) if c is '\0'.*/
if (*s == c)
return s;

return NULL;
}
