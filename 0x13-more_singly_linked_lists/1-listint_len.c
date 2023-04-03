#include "lists.h"
#include <stdlib.h>


/**
 * listint_len - return number of elements in a linked list
 * @h: pointer to the head of the pointer
 *
 * Returns: number of elements in the linked list
 */

size_t listint_len(const listint_t *h)
{
int count = 0;

for (; h != NULL; h = h->next)
{
count++;
}
return (count);
}
 
