#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t list safely
* @h: Pointer to the pointer to the head of the list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *current = *h;
listint_t *next_node;
size_t count = 0;
listint_t *slow = *h;
listint_t *fast = *h;
listint_t *loop_node = NULL;

if (h == NULL || *h == NULL)
return (0);

/* Detect loop using Floyd's Tortoise and Hare algorithm */
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
loop_node = slow;
break;
}
}

/* Find the start of the loop */
if (loop_node != NULL)
{
slow = *h;
while (slow != loop_node)
{
slow = slow->next;
loop_node = loop_node->next;
}
loop_node = slow;
}

/* Free nodes and count them */
while (current != NULL)
{
next_node = current->next;
free(current);
count++;

if (current == loop_node)
{
break;
}

current = next_node;
}

*h = NULL;
return (count);
}
