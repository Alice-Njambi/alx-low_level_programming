#include "main.h"

/**
 * times_table - prints the 9 times table starting from 0
 *
 * Description: This function prints the 9 times table, starting from 0,
 *              each number separated by ", ".
 */
void times_table(void)
{
    int row, col, product;

    for (row = 0; row <= 9; row++)
    {
        for (col = 0; col <= 9; col++)
        {
            product = row * col;
            if (col != 0)
            {
                _putchar(',');
                _putchar(' ');

                /* Print an extra space for single digit numbers to align properly */
                if (product < 10)
                    _putchar(' ');
            }
            /* Print each digit of the product */
            if (product >= 10)
            {
                _putchar('0' + product / 10); /* Print tens digit */
            }
            _putchar('0' + product % 10); /* Print units digit */
        }
        _putchar('\n');
    }
}
