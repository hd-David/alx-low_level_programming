#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a
 * listint_t linked list.
 * @head: A pointer to a pointer to the first node of the list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *prev_node;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
current_node = *head;
*head = (*head)->next;
free(current_node);
return (1);
}

prev_node = *head;
for (i = 0; i < index - 1 && prev_node != NULL; i++)
prev_node = prev_node->next;

if (prev_node == NULL || prev_node->next == NULL)
return (-1);

current_node = prev_node->next;
prev_node->next = current_node->next;
free(current_node);

return (1);
}
