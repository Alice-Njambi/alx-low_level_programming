#include <stdio.h>

/**
 * print_putchar: function prints string of characters.
 *
 * return- void.
 */
int print_putchar()
{
	char str[] = "_putchar";
	int i = 0;
	for (i = 0; i < 8; i++)
	{
        putchar(str[i]);
	}
    
	putchar('\n');
	return 0;
}
