#include "lists.h"
/**
 * *get_nodeint_at_index - A function that returns the nth node
 * of a linked list
 * @head: the first node
 * @index: ind of the node starts from 0
 * Return: A pointer of the nth node or NULL if node doesn't exis
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int u = 0;
listint_t *loc = head;
while (loc && u < index)
{
loc = loc->next;
u++;
}
return (loc ? loc : NULL);
}
