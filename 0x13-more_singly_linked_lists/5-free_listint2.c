#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
listint_t *current_node, *next_node;

if (head == NULL)
return;

for (current_node = *head; current_node != NULL;)
{
next_node = current_node->next;
free(current_node);
current_node = next_node;
}

*head = NULL;
}
