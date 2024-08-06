#include "lists.h"

/**
* sum_listint - Calculates the sum of all the data (n) in a listint_t linked list.
* @head: Pointer to the head of the linked list.
*
* Return: The sum of all the data (n) in the linked list. If the list is empty, return 0.
*/
int sum_listint(listint_t *head)
{
int sum = 0;                /* Initialize sum to 0 */
listint_t *current = head;  /* Start with the head of the list */

/* Traverse the linked list */
while (current != NULL)
{
sum += current->n;      /* Add the current node's data to sum */
current = current->next; /* Move to the next node */
}

return sum; /* Return the total sum */
}
