#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
listint_t *head;

head = NULL;
/* Add nodes to the end of the list */
add_nodeint_end(&head, 0);
add_nodeint_end(&head, 1);
add_nodeint_end(&head, 2);
add_nodeint_end(&head, 3);
add_nodeint_end(&head, 4);
add_nodeint_end(&head, 98);
add_nodeint_end(&head, 402);
add_nodeint_end(&head, 1024);

/* Print the list */
print_listint(head);

/* Separator line */
printf("-----------------\n");

/* Insert a new node at index 5 */
insert_nodeint_at_index(&head, 5, 4096);

/* Print the updated list */
print_listint(head);

/* Free the list */
free_listint2(&head);

return (0);
}
