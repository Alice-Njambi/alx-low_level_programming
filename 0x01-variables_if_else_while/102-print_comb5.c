#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 99; ++i) {
        for (j = i; j <= 99; ++j) {
            /* Print first number (i) */
            putchar('0' + i / 10);
            putchar('0' + i % 10);

            /* Print space */
            putchar(' ');

            /* Print second number (j) */
            putchar('0' + j / 10);
            putchar('0' + j % 10);

            /* Check if it's the last combination */
            if (i != 99 || j != 99) {
                /* Print comma and space */
                putchar(',');
                putchar(' ');
            }
        }
    }

    /* Print newline at the end */
    putchar('\n');

    return 0;
}
