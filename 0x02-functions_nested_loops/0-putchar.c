#include <stdio.h>
#include "math.h"

/**
 * print_putchar: function prints string of characters.
 * _putchar : function that prints characters.
 * @c- The characters to print.
 *
 * return- void.
 */

int print_putchar()
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    putchar('\n');
    return 0;
}
