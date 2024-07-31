#include "function_pointers.h"
/**
* int_index - searches for an integer in an array.
* @array: the array to search
* @size: the number of elements in the array
* @cmp: pointer to the function used to compare values
*
* Description: This function iterates over the array and applies the
* function pointed to by 'cmp' to each element. It returns the index
* of the first element for which the 'cmp' function does not return 0.
* If no element matches, it returns -1. If size <= 0, it returns -1.
*
* Return: index of the first element that matches the criteria, or -1 if none match
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
/* Check if array or cmp is null or if size is non-positive */
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
/* Iterate over the array and apply the cmp function */
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
/* Return -1 if no element matches */
return (-1);
}
