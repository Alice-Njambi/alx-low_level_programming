#include <stdio.h>
#include "main.h"

/**
 * print_alphabet: Function prints alphabet characters.
 *
 * Description - Function prints alphabet increment in lowercase.
 * Return - void.
 */
int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z'){
		putchar(letter);
		letter++;
}

	putchar('\n');
	return (0);
}
