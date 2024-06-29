#include <stdio.h>
#include "main.h"

/**
 * print_alphabet: Prints alphabet characters.
 * putchar: Prints character by character. 
 *
 * Description - Function prints alphabet increment in lowercase.
 * Return - Zero, 0, for success.
 */
int print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
		putchar(letter);
		letter++;
}

	putchar('\n');
	return (0);
}
