#include "lists.h"
/**
 * *insert_nodeint_at_index - A function that inserts a node
 * at a given position
 * @head: a pointer ti the first node
 * @idx: the index of the list where the new node should be added
 * @n: data for the new node
 * Return: the address of the new node or NULL at failur
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int u;
listint_t *inserted;
listint_t *loc = *head;
inserted = malloc(sizeof(listint_t));
if (!inserted || !head)
return (NULL);
inserted->n = n;
inserted->next = NULL;
if (idx == 0)
{
inserted->next = *head;
*head = inserted;
return (inserted);
}
for (u = 0; loc && u < idx; u++)
{
if (u == idx - 1)
{
inserted->next = loc->next;
loc->next = inserted;
return (inserted);
}
else
loc = loc->next;
}
return (NULL);
}
