#include "main.h"

/**
* get_endianness - Checks the endianness of the system.
*
* Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
unsigned int test = 1;
char *byte = (char *) &test;

/* Check the first byte to determine endianness */
if (*byte)
return (1);
/* Little Endian */
else
return (0);
/* Big Endian */
}
