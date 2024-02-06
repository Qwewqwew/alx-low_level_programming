#include "lists.h"
/**
 * free_listint2 - A function that frees a listint_t list
 * @head: a pointer to the list which should be freed
*/
void free_listint2(listint_t **head)
{
listint_t *loc;
if (head == NULL)
return;
while (*head)
{
loc = (*head)->next;
free(*head);
*head =	loc;
}
*head = NULL;
}
