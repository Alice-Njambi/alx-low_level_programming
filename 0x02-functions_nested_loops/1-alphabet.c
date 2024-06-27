#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function prints alphabets in lowercase.
 *
 * Return : Zero, 0 for SUCCESS.
 */
void print_alphabet(void);

int main()
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char small_alphabet[] = "abcdefghijklmnopqrstuvwxyz";
        int i;
        i=0;
        while(small_alphabet[i] != '\0'){
                putchar(small_alphabet[i]);
                i++;
        }
        putchar('\n');
}
