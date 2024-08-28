#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: The index, starting from 0, of the bit to set.
*
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is out of range */
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* Use bitwise AND with the complement of the bit at the given index to set the bit to 0 */
*n &= ~(1UL << index);

return (1);
}
