#include "main.h"

/* Function prototypes */
int int_to_str(int n, char *buffer); /* Declare int_to_str before it is used */

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the matrix
* @size: size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
char buffer[20]; /* Buffer to store the result as a string */
int length1, length2; /* Declare variables at the beginning of the block */

/* Calculate sums of the diagonals */
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i); /* elements of the main diagonal */
sum2 += *(a + i * size + (size - 1 - i)); /* elements of the anti-diagonal */
}

/* Convert sums to strings */
length1 = int_to_str(sum1, buffer);
buffer[length1] = ',';
buffer[length1 + 1] = ' ';
length2 = int_to_str(sum2, buffer + length1 + 2);
buffer[length1 + 2 + length2] = '\n';
buffer[length1 + 3 + length2] = '\0';

/* Output the buffer using _putchar */
for (i = 0; buffer[i]; i++)
_putchar(buffer[i]);
}

/**
* int_to_str - Convert an integer to a string
* @n: Integer to convert
* @buffer: Buffer to store the string representation
*
* Return: Length of the string
*/
int int_to_str(int n, char *buffer)
{
int i = 0, is_negative = 0, length;
char temp;

/* Handle zero case */
if (n == 0)
{
buffer[i++] = '0';
return i;
}

/* Handle negative numbers */
if (n < 0)
{
is_negative = 1;
n = -n;
}

/* Convert integer to string */
while (n != 0)
{
buffer[i++] = (n % 10) + '0';
n /= 10;
}

/* Add negative sign if applicable */
if (is_negative)
buffer[i++] = '-';

/* Reverse the string */
length = i;
for (i = 0; i < length / 2; i++)
{
temp = buffer[i];
buffer[i] = buffer[length - i - 1];
buffer[length - i - 1] = temp;
}

return (length);
}
