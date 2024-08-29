#include "main.h"
#include <stdlib.h>

/**
* _strdup - Duplicates a string in newly allocated memory.
* @str: The string to duplicate.
*
* Return: Pointer to the duplicated string or
* 	NULL if str = NULL or if malloc fails.
*/
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

/* Check if the input string is NULL */
if (str == NULL)
{
return (NULL);
}

/* Calculate the length of the string */
for (len = 0; str[len] != '\0'; len++)
;

/* Allocate memory for the duplicated string */
dup = (char *)malloc((len + 1) * sizeof(char));
if (dup == NULL)
{
return (NULL);
}

/* Copy the string into the newly allocated memory */
for (i = 0; i <= len; i++) /* Copy including the null terminator */
{
dup[i] = str[i];
}

return (dup);
}
