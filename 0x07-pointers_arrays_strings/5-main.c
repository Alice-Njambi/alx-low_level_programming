#include "main.h"

/**
* simple_print - prints a string or message
* @str: the string to print
*
* Return: Nothing
*/
void simple_print(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *s = "hello, world";
char *f = "world";
char *t;

t = _strstr(s, f);
if (t != (char *)0)
simple_print(t);
else
simple_print("Substring not found");

return (0);
}
