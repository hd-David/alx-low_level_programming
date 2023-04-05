#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *curr = head, *prev = NULL;
size_t count = 0;

while (curr != NULL)
{
printf("[%p] %d\n", (void *) curr, curr->n);
count++;
prev = curr;
curr = curr->next;

/* Check if we've looped back to a previous node */
if (curr >= prev)
{
printf("-> [%p] %d\n", (void *) curr, curr->n);
break;
}
}

return (count);
}
