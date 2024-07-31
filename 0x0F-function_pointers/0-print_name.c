#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - prints a name using a provided function
* @name: the name to print
* @f: pointer to the function to use for printing
*
* Description: This function takes a string 'name' and a function pointer 'f'.
* If both are non-null, it calls the function pointed to by 'f', passing 'name'
* as an argument to that function.
*/
void print_name(char *name, void (*f)(char *))
{
/* Check if both 'name' and 'f' are not null */
if (name && f)
/* Call the function pointed to by 'f' with 'name' as an argument */
f(name);
}
