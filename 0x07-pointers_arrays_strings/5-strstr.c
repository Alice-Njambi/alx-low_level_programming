#include "main.h"

/**
* _strstr - Locates the first occurrence of a substring in a string
* @haystack: The main string to search within
* @needle: The substring to search for
*
* Return: Pointer to the beginning of the located substring,
*         or custom null pointer if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
return haystack;

while (*haystack)
{
char *start = haystack;
char *pattern = needle;

while (*pattern && *haystack && *haystack == *pattern)
{
haystack++;
pattern++;
}

if (*pattern == '\0')
return start;

haystack = start + 1;
}

return (char *)0;  /* Custom null pointer. */
}
