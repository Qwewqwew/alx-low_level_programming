#include "lists.h"
/**
 * *add_nodeint_end - A function that adds a new node at the end
 * of a linled list
 * @head: double pointer
 * @n: integer value
 * Return: the address of the new element or NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *last_node;
listint_t *loc = *head;
last_node = malloc(sizeof(listint_t));
if (!last_node)
return (NULL);
last_node->n = n;
last_node->next = NULL;
if (*head == NULL)
{
*head = last_node;
return (last_node);
}
while (loc->next)
loc = loc->next;
loc->next = last_node;
return (last_node);
}
