#include "main.h"
#include <stdio.h>

/**
* main - Prints the name of the program
* @argc: The number of command line arguments
* @argv: An array of pointers to the command line arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argc; /* Unused variable */
printf("%s\n", argv[0]);
return (0);
}
