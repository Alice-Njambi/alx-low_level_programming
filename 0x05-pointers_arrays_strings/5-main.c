#include "main.h"
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char s[10] = "My School";

printf("%s\n", s);  /* Output: My School */
rev_string(s);
printf("%s\n", s);  /* Output: loohcS yM */

return (0);
}
