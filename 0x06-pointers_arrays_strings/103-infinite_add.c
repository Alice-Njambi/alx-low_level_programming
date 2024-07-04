#include "main.h"

/**
* infinite_add - Adds two numbers stored as strings
* @n1: First number as a string
* @n2: Second number as a string
* @r: Buffer to store the result
* @size_r: Size of the buffer @r
*
* Return: Pointer to the result string if successful, 0 if result cannot be stored in @r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i = 0, j = 0, k = 0;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--, k++)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[k] = (sum % 10) + '0';
}

r[k] = '\0';

for (i = 0, --k; i < k; i++, k--)
{
int temp = r[i];
r[i] = r[k];
r[k] = temp;
}

return (r);
}
