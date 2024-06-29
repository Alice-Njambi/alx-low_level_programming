#include <stdio.h>
#include "math.h"

/**
 * print_putchar: Function Definition.
 * 
 * Description - Function prints using array and loop.
 * Return- Zero, 0, for success.
 */

int print_putchar()
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }
 
    return 0;
}
