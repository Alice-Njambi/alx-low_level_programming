#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */

/* Declaration of function. */
void reset_to_98(int *ptr);

int main(void)
{
    int n;
    int *p; /* Pointer p */

    n = 402;
    p = &n; /* Pointer p is set the address of variable n. */

    printf("Variable n before call = %d \n", n);
    
    reset_to_98(p);

    printf("Variable n after call = %d \n", n);
    
    return (0);
}
