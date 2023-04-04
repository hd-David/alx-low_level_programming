#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *slow = head, *fast = head;

while (slow && fast && fast->next)
{
printf("[%p] %d\n", (void *) slow, slow->n);
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *) slow, slow->n);
printf("-> [%p] %d\n", (void *) fast, fast->n);
exit(98);
}

count++;
}

if (slow)
{
printf("[%p] %d\n", (void *) slow, slow->n);
count++;
}

return (count);
}
