#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars and initializes it with char.
* @size: The size of the array to create.
* @c: The char to initialize the array with.
*
* Return: Pointer to the array, or NULL if size = 0 or if malloc fails.
*/
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

/* Check if size is 0.*/
if (size == 0)
{
return (NULL);
}

/* Allocate memory for the array.*/
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}

/* Initialize the array with the character 'c'. */
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
