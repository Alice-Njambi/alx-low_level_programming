#include "main.h"

/**
* flip_bits - Returns the number of bits you would need to flip to get from one number to another.
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits that need to be flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int bit_count;

/* Perform XOR to find differing bits */
xor_result = n ^ m;

/* Count the number of set bits in the result */
bit_count = 0;
while (xor_result)
{
/* Increment bit_count for each set bit */
bit_count += (xor_result & 1);
/* Shift right to process the next bit */
xor_result >>= 1;
}

return (bit_count);
}
