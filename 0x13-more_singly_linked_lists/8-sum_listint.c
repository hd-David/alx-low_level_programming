#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the list
 *
 * Return: sum of all the data (n) of the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current_node;

for (current_node = head; current_node != NULL;\
current_node = current_node->next)
{
sum += current_node->n;
}

return sum;
}
