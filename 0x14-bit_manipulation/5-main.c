#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
unsigned int n;

n = flip_bits(1024, 1);
printf("%u\n", n); /* Expected output: 2 */

n = flip_bits(402, 98);
printf("%u\n", n); /* Expected output: 5 */

n = flip_bits(1024, 3);
printf("%u\n", n); /* Expected output: 3 */

n = flip_bits(1024, 1025);
printf("%u\n", n); /* Expected output: 1 */

return 0;
}
