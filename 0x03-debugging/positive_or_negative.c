#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* positive_or_negative - the main function of the program
* @i: the function receives no arguments
*
* Return: no return value
*/
void positive_or_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
