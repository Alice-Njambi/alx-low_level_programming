#include "3-calc.h"
/**
* main - performs simple operations
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, otherwise exits with a status code
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*op_func)(int, int);
/* Check for the correct number of arguments */
if (argc != 4)
{
printf("Error\n");
exit(98);
}
/* Convert arguments to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
/* Get the function corresponding to the operator */
op_func = get_op_func(argv[2]);
/* Check for invalid operator */
if (op_func == NULL)
{
printf("Error\n");
exit(99);
}
/* Check for division by zero */
if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
/* Perform the operation and print the result */
printf("%d\n", op_func(num1, num2));
return (0);
}
