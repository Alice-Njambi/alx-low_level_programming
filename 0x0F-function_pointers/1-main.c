#include <stdio.h>
#include "function_pointers.h"
/**
* print_elem - prints an integer
* @elem: the integer to print
*
* Return: Nothing.
*/
void print_elem(int elem)
{
/* Print the integer as is */
printf("%d\n", elem);
}
/**
* print_elem_hex - prints an integer in hexadecimal
* @elem: the integer to print
*
* Return: Nothing.
*/
void print_elem_hex(int elem)
{
/* Print the integer in hexadecimal format */
printf("0x%x\n", elem);
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};
/* Apply print_elem to each element of the array */
array_iterator(array, 5, &print_elem);
/* Apply print_elem_hex to each element of the array */
array_iterator(array, 5, &print_elem_hex);
return (0);
}
