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
* word_length - calculates the length of a word
* @str: the string starting from a word
*
* Return: the length of the word
*/
static int word_length(char *str)
{
int len = 0;

while (str[len] != ' ' && str[len] != '\0')
{
len++;
}

return (len);
}

/**
* free_words - frees the memory allocated for words array
* @words: array of words to free
* @i: index up to which memory needs to be freed
*/
static void free_words(char **words, int i)
{
int j;

for (j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
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
int i = 0, wc, len;

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

while (i < wc)
{
while (*str == ' ')
{
str++;
}

len = word_length(str);
words[i] = malloc((len + 1) * sizeof(char));
if (words[i] == NULL)
{
free_words(words, i);
return (NULL);
}

for (int k = 0; k < len; k++)
{
words[i][k] = str[k];
}
words[i][len] = '\0';
str += len;
i++;
}
words[wc] = NULL;

return (words);
}
