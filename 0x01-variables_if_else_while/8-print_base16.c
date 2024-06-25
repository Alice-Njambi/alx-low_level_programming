#include <stdio.h>
/**
* main- Entry point.
*
* Description:Program that prints numbers of base 16 in lowercase.
* Return:Zero, 0.
*/
int main(void)
{
char ch = '0';

do {
if ((ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f')) 
putchar(ch);

ch++;
} while (ch <= 'f');

putchar('\n');

return (0);
}
