#include "lists.h"
/**
 * delete_nodeint_at_index - A function that delete the node index
 * of a linked list
 * @head: a pointer to the first element
 * @index: the index that should be deleted which starts from 0
 * Return: 1 on success or -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *loc = *head;
listint_t *m = NULL;
unsigned int u = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(loc);
return (1);
}
while (u < index - 1)
{
if (!loc || !(loc->next))
return (-1);
loc = loc->next;
u++;
}
m = loc->next;
loc->next = m->next;
free(m);
return (1);
}
