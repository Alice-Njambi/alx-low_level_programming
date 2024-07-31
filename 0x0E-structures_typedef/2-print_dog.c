#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints the details of a struct dog
* @d: Pointer to a struct dog to print
*
* Description: If an element of d is NULL, print (nil) instead of this element.
* If d is NULL, print nothing.
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
/* Print name */
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
/* Print age */
printf("Age: %.6f\n", d->age);
/* Print owner */
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
