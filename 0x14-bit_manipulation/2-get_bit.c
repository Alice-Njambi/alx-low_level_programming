#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
* @n: The number to search.
* @index: The index, starting from 0, of the bit to get.
*
* Return: The value of the bit at index index, or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
/* Check if the index is out of range */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Use bitwise AND to check the bit at the given index */
return ((n >> index) & 1);
}
