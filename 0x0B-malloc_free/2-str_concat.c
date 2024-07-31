#include "main.h"
#include <stdlib.h>

/**
* str_concat - Concatenates two strings.
* @s1: The first string.
* @s2: The second string.
*
* Return: Pointer to the newly allocated space containing s1 followed by s2,
*         or NULL on failure. Treat NULL as an empty string.
*/
char *str_concat(char *s1, char *s2)
{
char *concat_str;
unsigned int len1 = 0, len2 = 0, i;

/* Handle NULL input strings by treating them as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* Calculate the length of both strings */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* Allocate memory for the concatenated string (+1 for the null terminator) */
concat_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
if (concat_str == NULL)
{
return (NULL);
}

/* Copy the first string into the newly allocated memory */
for (i = 0; i < len1; i++)
{
concat_str[i] = s1[i];
}

/* Append the second string to the concatenated string */
for (i = 0; i < len2; i++)
{
concat_str[len1 + i] = s2[i];
}

/* Null terminate the concatenated string */
concat_str[len1 + len2] = '\0';

return (concat_str);
}
