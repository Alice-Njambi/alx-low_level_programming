#include <stdio.h>

void print_putchar(void);

/**
 * main - entry point.
 *
 * Description:  Program prints specific string of characters- _putchar.
 * Return: Zero, 0.
 */
int main(void)
{
print_putchar();
return 0;
}

/**
 * print_putchar - Function prints '_putchar' on screen.
 *
 * Description: Function uses a loop to print string stored in array variable.
 * Return: Zero, 0. 
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
