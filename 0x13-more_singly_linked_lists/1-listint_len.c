#include "lists.h"
/**
 * listint_len -A function that returns the number of elements in
 * a linked lists
 * @h: linked list to pass
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t j = 0;
while (h)
{
j++;
h = h->next;
}
return (j);
}
