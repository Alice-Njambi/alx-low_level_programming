#include "lists.h"  /* Include the header file with prototypes and definitions */
#include <stdlib.h> /* Include the standard library for malloc and free */

/**
* delete_nodeint_at_index - Deletes the node at a given position
* @head: Pointer to the pointer of the head of the list
* @index: Index of the node that should be deleted
*
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;  /* Pointer to traverse the list */
listint_t *temp;     /* Temporary pointer to hold the node to be deleted */
unsigned int i;

/* Check if the list is empty */
if (*head == NULL)
return (-1);

/* If deleting the head node */
if (index == 0)
{
/* Save the current head node */
temp = *head;
/* Move the head to the next node */
*head = (*head)->next;
/* Free the old head node */
free(temp);
return (1);
}

/* Traverse the list to find the node before the one to delete */
current = *head;
for (i = 0; current != NULL && i < index - 1; i++)
current = current->next;

/* Check if the index is out of range */
if (current == NULL || current->next == NULL)
return (-1);

/* Save the node to be deleted */
temp = current->next;
/* Link the previous node to the node after the one to be deleted */
current->next = temp->next;
/* Free the node to be deleted */
free(temp);

return (1);
}
