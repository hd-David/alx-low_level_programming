#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow_p = head, *fast_p = head;

while (slow_p && fast_p && fast_p->next)
{
slow_p = slow_p->next;
fast_p = fast_p->next->next;

if (slow_p == fast_p)
{
slow_p = head;

while (slow_p && fast_p)
{
if (slow_p == fast_p)
return (slow_p);

slow_p = slow_p->next;
fast_p = fast_p->next;
}
}
}

return (NULL);
}
