#include "main.h"
#include <stdlib.h>

/**
* word_count - counts the number of words in a string
* @str: the string to count words in
*
* Return: the number of words
*/
static int word_count(char *str)
{
int count = 0, in_word = 0;

while (*str)
{
if (*str != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (*str == ' ' && in_word)
{
in_word = 0;
}
str++;
}

return (count);
}

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: pointer to an array of strings (words), NULL on failure
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, wc;

if (str == NULL || *str == '\0')
{
return (NULL);
}

wc = word_count(str);
if (wc == 0)
{
return (NULL);
}

words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}

for (i = 0; i < wc; i++)
{
while (*str == ' ')
{
str++;
}
len = 0;
while (str[len] != ' ' && str[len] != '\0')
{
len++;
}
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
for (k = 0; k < len; k++)
{
words[i][k] = str[k];
}
words[i][len] = '\0';
str += len;
}
words[wc] = NULL;

return (words);
}

