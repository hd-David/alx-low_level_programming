#include "lists.h"
#include <stdlib.h>


/**
 * reverse_listint - Reverses a linked list
 *
 * @head: A pointer to the head of the linked list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL, *next = NULL;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}

*head = previous;

return (*head);
}
