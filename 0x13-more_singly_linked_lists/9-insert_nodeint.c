#include "lists.h"  /* Include the header file with prototypes and definitions */
#include <stdlib.h> /* Include the standard library for malloc and free */

/**
* insert_nodeint_at_index - Inserts a new node at a given position
* @head: Pointer to the pointer of the head of the list
* @idx: Index where the new node should be added
* @n: Data to insert in the new node
*
* Return: Address of the new node, or NULL if it failed or index is out of range
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node;  /* Pointer to the new node */
listint_t *current;   /* Pointer to traverse the list */
unsigned int i;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)  /* Check if memory allocation failed */
return (NULL);

/* Initialize the new node */
new_node->n = n;
new_node->next = NULL;

/* If inserting at the head of the list */
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

/* Traverse the list to find the position to insert */
current = *head;
for (i = 0; current != NULL && i < idx - 1; i++)
current = current->next;

/* Check if index is out of range */
if (current == NULL)
{
free(new_node);  /* Free allocated memory before returning NULL */
return (NULL);
}

/* Insert the new node at the specified index */
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
