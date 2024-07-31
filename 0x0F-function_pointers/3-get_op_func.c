#include "3-calc.h"
/**
* get_op_func - selects the correct function to perform the operation asked
* @s: the operator passed as argument to the program
*
* Return: pointer to the function that corresponds to the operator, or NULL if none match
*/
int (*get_op_func(char *s))(int, int)
{
/* Define the array of operation structs */
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
/* Iterate over the ops array to find the matching operator */
while (ops[i].op != NULL)
{
if (*(ops[i].op) == *s && s[1] == '\0')
return (ops[i].f);
i++;
}
/* Return NULL if no operator matches */
return (NULL);
}
