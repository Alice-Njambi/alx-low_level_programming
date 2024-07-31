#include <stdio.h>  /* Include the standard I/O library for printf */
#include "main.h"  /* Include the custom header file */
/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);  /* Print the name as is */
}
/**
* print_name_uppercase - print a name in uppercase
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i;  /* Declare an unsigned integer for iteration */
printf("Hello, my uppercase name is ");  /* Print the introduction */
i = 0;  /* Initialize the iterator */
while (name[i])  /* Loop through each character in the name */
{
if (name[i] >= 'a' && name[i] <= 'z')  /* Check if the character is lowercase */
{
putchar(name[i] + 'A' - 'a');  /* Convert lowercase to uppercase and print */
}
else
{
putchar(name[i]);  /* Print the character as is if it's not lowercase */
}
i++;  /* Move to the next character */
}
printf("\n");  /* Print a new line after the name */
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
print_name("Bob", print_name_as_is);  /* Print the name "Bob" as is */
print_name("Bob Dylan", print_name_uppercase);  /* Print the name "Bob Dylan" in uppercase */
return (0);  /* Return 0 to indicate successful execution */
}
