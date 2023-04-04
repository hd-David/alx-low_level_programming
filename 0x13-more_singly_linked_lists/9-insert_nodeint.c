#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the beginning of the linked list
 * @idx: index of the list where the new node should be added
 * @n: integer data to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *n_node, *temp_node;
unsigned int count = 0;

if (!head)
return (NULL);

n_node = malloc(sizeof(listint_t));
if (!n_node)
return (NULL);

n_node->n = n;
temp_node = *head;

if (idx == 0)
{
n_node->next = *head;
*head = n_node;
return (n_node);
}

while (count < (idx - 1))
{
if (temp_node == NULL)
{
free(n_node);
return (NULL);
}
temp_node = temp_node->next;
count++;
}
n_node->next = temp_node->next;
temp_node->next = n_node;

return (n_node);
}
