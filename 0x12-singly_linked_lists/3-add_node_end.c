#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Add a new node at the end of a list_t list
 * @head: The pointer to the head node pointer
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *last_node = *head;
size_t len;

/* Create the new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

len = strlen(str);

new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = len;
new_node->next = NULL;

/* If the list is empty, make the new node the head node */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the list until the last node */
while (last_node->next != NULL)
last_node = last_node->next;

/* Make the last node point to the new node */
last_node->next = new_node;

return (new_node);
}
