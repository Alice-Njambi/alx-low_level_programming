#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int num_bytes;
unsigned char *main_ptr;
int i;

/* Check for the correct number of arguments */
if (argc != 2)
{
printf("Error\n");
exit(1);
}

/* Convert the argument to an integer */
num_bytes = atoi(argv[1]);

/* Check if the number of bytes is negative */
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}

/* Get the address of the main function */
main_ptr = (unsigned char *)main;

/* Print the opcodes in hexadecimal format */
for (i = 0; i < num_bytes; i++)
{
if (i > 0)
printf(" ");
printf("%02x", main_ptr[i]);
}
printf("\n");

return (0);
}
