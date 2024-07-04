#include "main.h"

/**
* rot13 - encodes a string using rot13 cipher
* @str: the string to encode
*
* Return: pointer to the resulting string
*/
char *rot13(char *str)
{
int i, j;
char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13_alphabet[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (alphabet[j] != '\0')
{
if (str[i] == alphabet[j])
{
str[i] = rot13_alphabet[j];
break;
}
j++;
}
i++;
}

return (str);
}
