#include "lists.h"
/**
 * free_listint -  A function that frees a linked list
 * @head: list to be freed
*/
void free_listint(listint_t *head)
{
listint_t *loc;
while (head)
{
loc = head->next;
free(head);
head = loc;
}
}
