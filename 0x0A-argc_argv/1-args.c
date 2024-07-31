#include "main.h"
#include <stdio.h>

/**
* main - Prints the number of command line arguments
* @argc: The number of command line arguments
* @argv: An array of pointers to the command line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argv; /* Unused variable */
printf("%d\n", argc - 1); /* argc includes the program name, so subtract 1 */
return (0);
}
