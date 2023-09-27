#include "lists.h"
/**
 * sum_listint - A function that returns sum of all data of a
 * listint_t linled list
 * @head: first node
 * Return: sum of all data (n) or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int i = 0;
listint_t *loc = head;
while (loc)
{
i += loc->n;
loc = loc->next;
}
return (i);
}
