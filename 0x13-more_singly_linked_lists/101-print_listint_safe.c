#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - Prints a listint_t linked list safely
* @head: Pointer to the head of the list
*
* Return: The number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head; /* Slow pointer */
const listint_t *fast = head; /* Fast pointer */
const listint_t *loop_node = NULL;
size_t count = 0;

if (head == NULL)
{
exit(98);
}

/* Detect loop using Floyd's Tortoise and Hare algorithm */
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast) /* Cycle detected */
{
loop_node = slow;
break;
}
}

/* If loop is detected, find the start of the loop */
if (loop_node != NULL)
{
const listint_t *ptr = head;

while (ptr != loop_node)
{
ptr = ptr->next;
loop_node = loop_node->next;
}
loop_node = ptr; /* Start of the loop */
}

/* Print nodes */
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;

if (head == loop_node) /* Detect the loop start point */
{
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}

head = head->next;
}

if (head == NULL)
{
exit(98);
}

return count;
}
