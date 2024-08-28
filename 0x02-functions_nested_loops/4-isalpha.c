#include "main.h"

/**
* _isalpha - checks if a character is alphabetic (uppercase or lowercase)
* @c: The character to check
*
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
