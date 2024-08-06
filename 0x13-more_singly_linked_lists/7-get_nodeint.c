#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @head: Pointer to the head of the list.
* @index: Index of the node, starting at 0.
*
* Return: Pointer to the nth node, or NULL if the node does not exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL; i++)
{
if (i == index)
return (head); /* Return the node if the index matches */

head = head->next; /* Move to the next node */
}

return (NULL); /* Return NULL if the index exceeds the list length */
}
