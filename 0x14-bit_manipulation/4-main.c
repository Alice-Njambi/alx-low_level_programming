#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
unsigned long int n;

n = 1024;
/* Clear the bit at index 10 in 1024 */
clear_bit(&n, 10);
printf("%lu\n", n); /* Expected output: 0 */

n = 0;
/* Clear the bit at index 10 in 0 */
clear_bit(&n, 10);
printf("%lu\n", n); /* Expected output: 0 */

n = 98;
/* Clear the bit at index 1 in 98 */
clear_bit(&n, 1);
printf("%lu\n", n); /* Expected output: 96 */

return (0);
}
