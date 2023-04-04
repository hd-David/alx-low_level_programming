#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This frees listint_t list
 *
 * @head: ppointer to the head of the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
listint_t *curent_node = head, *next_node;

while(curent_node != NULL)
{
next_node = curent_node->next;
     
free(curent_node);
curent_node = next_node;     
}

}
