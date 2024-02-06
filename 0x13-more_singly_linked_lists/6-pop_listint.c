#include "lists.h"
/**
 * pop_listint - A function that deletes the head node of a linked
 * list and returns the head list data
 * @head: A pointer to the first element
 * Return: the head list data (n) or (0) if it is embty
*/
int pop_listint(listint_t **head)
{
listint_t *loc;
int i;
if (!head || !*head)
return (0);
i = (*head)->n;
loc = (*head)->next;
free(*head);
*head = loc;
return (i);
}
