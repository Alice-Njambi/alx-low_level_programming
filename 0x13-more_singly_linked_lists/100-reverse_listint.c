#include "lists.h"

/**
* reverse_listint - Reverses a linked list
* @head: Pointer to the pointer of the head of the list
*
* Return: Pointer to the first node of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;   /* Previous node, initially NULL */
listint_t *current = *head; /* Current node, starts at the head */

while (current != NULL)
{
listint_t *next = current->next; /* Save the next node */
current->next = prev;  /* Reverse the link */
prev = current;        /* Move prev to current */
current = next;        /* Move to the next node */
}

*head = prev; /* Update the head to the new first node */
return (*head); /* Return the new head */
}
