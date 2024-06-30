#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10: function name.
 *
 * Description - Function prints alphabets in lowercase letters 10 times.
 * Return - Zero, 0, for success. Otherwise, for failure.
 */
int print_alphabet(void);

int print_alphabet_x10()
{
	int i;
	for (i=0;i<=10;i++)
	{
		print_alphabet();
		putchar('\n');
	}

	return 0;
}
