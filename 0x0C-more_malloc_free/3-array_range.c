#include "main.h"
#include <stdlib.h>

/**
* array_range - Creates an array of integers from min to max (inclusive)
* @min: The minimum value of the array
* @max: The maximum value of the array
*
* Return: Pointer to the newly created array, or NULL if min > max or malloc fails
*/
int *array_range(int min, int max)
{
int *array;
int i;

/* If min is greater than max, return NULL */
if (min > max)
return (NULL);

/* Allocate memory for the array */
array = malloc((max - min + 1) * sizeof(int));
if (array == NULL)
return (NULL);

/* Initialize the array with values from min to max */
for (i = 0; min <= max; i++)
{
array[i] = min++;
}

return (array);
}
