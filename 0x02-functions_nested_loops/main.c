#include "main.h"
#include <stdio.h>
/**
 * print_putchar: Prints a string of characters.
 *
 * Description - Prints the string "_putchar" on screen display.
 * Return - Zero, 0.
 */
void print_putchar(void)
{
    char str[] = "_putchar";
    int i = 0;

    while (str[i] != '\0') {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
