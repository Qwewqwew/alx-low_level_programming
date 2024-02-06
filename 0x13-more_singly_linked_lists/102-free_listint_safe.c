#include "lists.h"
/**
 * free_listint_safe - A function that frees a listint_t linked list
 * @h: A pointer to the first node
 * Return: the size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t l = 0;
int def;
listint_t *loc;
if (!h || !*h)
return (0);
while (*h)
{
def = *h - (*h)->next;
if (def > 0)
{
loc = (*h)->next;
free(*h);
*h = loc;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}
*h = NULL;
return (l);
}
