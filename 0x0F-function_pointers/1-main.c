#include <stdio.h>  /* Include the standard I/O library for printf */
#include "main.h"  /* Include the custom header file */
/**
* print_elem - prints an integer
* @elem: the integer to print
*
* Return: Nothing.
*/
void print_elem(int elem)
{
printf("%d\n", elem);  /* Print the integer */
}
/**
* print_elem_hex - prints an integer, in hexadecimal
* @elem: the integer to print
*
* Return: Nothing.
*/
void print_elem_hex(int elem)
{
printf("0x%x\n", elem);  /* Print the integer in hexadecimal format */
}
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};  /* Declare and initialize an array of integers */
array_iterator(array, 5, &print_elem);  /* Call array_iterator to print each element */
array_iterator(array, 5, &print_elem_hex);  /* Call array_iterator to print each element in hexadecimal */
return (0);  /* Return 0 to indicate successful execution */
}
