#include <stdio.h>

/**
* my_pre_main - prints a message before main is executed
*
* Description: This function prints the message specified
* before the main function is executed. It is registered
* to run automatically using the constructor attribute.
*/
void my_pre_main(void) __attribute__ ((constructor));

void my_pre_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
