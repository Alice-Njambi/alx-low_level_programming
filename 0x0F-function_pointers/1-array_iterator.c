#include "main.h"  /* Include the header file containing the prototype */
/**
* array_iterator - executes a function given as a parameter on each element of an array
* @array: the array to iterate over
* @size: the size of the array
* @action: a pointer to the function to be used
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;  /* Declare a variable to use as the iterator */
if (array && action)  /* Check if array and function pointer are not NULL */
{
for (i = 0; i < size; i++)  /* Loop through each element of the array */
{
action(array[i]);  /* Call the function pointed to by action, passing the current element */
}
}
}
