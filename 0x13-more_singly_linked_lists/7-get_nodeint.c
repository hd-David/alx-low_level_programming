#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of the list, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current_node;

if (head == NULL)
return (NULL);

current_node = head;

for (i = 0; current_node != NULL && i < index; i++)
current_node = current_node->next;

if (i == index)
return (current_node);

return (NULL);
}


