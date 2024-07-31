#include "main.h"  /* Include the header file containing the prototype */
/**
* print_name - prints a name using the function pointed to by f
* @name: name of the person
* @f: function pointer to the function used to print the name
*
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)  /* Check if name and function pointer are not NULL */
{
f(name);  /* Call the function pointed to by f, passing name as the argument */
}
}
