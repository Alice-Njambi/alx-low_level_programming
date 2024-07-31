#include "main.h"
#include <stdlib.h>

/**
* _calloc - Allocates memory for an array of nmemb elements of size bytes each
* @nmemb: Number of elements
* @size: Size of each element
*
* Return: Pointer to allocated memory or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *init;

/* Check for 0 nmemb or size */
if (nmemb == 0 || size == 0)
return (NULL);

/* Allocate memory */
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

/* Initialize allocated memory to zero */
init = ptr;
for (i = 0; i < (nmemb * size); i++)
init[i] = 0;

return (ptr);
}
