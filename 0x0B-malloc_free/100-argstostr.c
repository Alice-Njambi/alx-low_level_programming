#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all arguments of the program
* @ac: number of arguments
* @av: array of arguments
*
* Return: pointer to new string, NULL if fails or if ac == 0 or av == NULL
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len;

if (ac == 0 || av == NULL)
{
return (NULL);
}

len = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
len++;
}
len++;  /* For the newline character */
}
len++;  /* For the null terminator */

str = malloc(len *sizeof(char));
if (str == NULL)
{
return (NULL);
}

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k++] = av[i][j];
}
str[k++] = '\n';
}
str[k] = '\0';

return (str);
}
