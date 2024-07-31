#include <stdio.h>
#include "function_pointers.h"
/**
* print_name_as_is - prints a name as is
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_as_is(char *name)
{
/* Print the name as is */
printf("Hello, my name is %s\n", name);
}
/**
* print_name_uppercase - print a name in uppercase
* @name: name of the person
*
* Return: Nothing.
*/
void print_name_uppercase(char *name)
{
unsigned int i;
/* Print a prefix message */
printf("Hello, my uppercase name is ");
/* Iterate through each character of the name */
i = 0;
while (name[i])
{
/* If the character is lowercase, convert to uppercase */
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
/* Otherwise, print the character as is */
putchar(name[i]);
}
i++;
}
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
/* Print the name "Bob" as is */
print_name("Bob", print_name_as_is);
/* Print the name "Bob Dylan" in uppercase */
print_name("Bob Dylan", print_name_uppercase);
/* Print a newline for better output formatting */
printf("\n");
/* Return 0 to indicate successful execution */
return (0);
}
