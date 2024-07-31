#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - executes a function given as a parameter
* on each element of an array.
* @array: the array to iterate over
* @size: the size of the array
* @action: pointer to the function to use
*
* Description: This function takes an array of integers, the size of the array,
* and a function pointer 'action'. It iterates over the array and applies the
* function pointed to by 'action' on each element of the array.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
/* Check if array and action are not null */
if (array && action)
{
/* Iterate over each element of the array */
for (i = 0; i < size; i++)
{
/* Apply the action function on the current element */
action(array[i]);
}
}
}
