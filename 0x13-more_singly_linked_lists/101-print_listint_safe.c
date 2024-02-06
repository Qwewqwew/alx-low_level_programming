#include "lists.h"
/**
 * count_unique - Counts number of the unique nodes in a loope
 * listint_t linked list.
 * @head: A pointer to the first node
 * Return: the number of unique nodes or 0 if it is not looped
*/
size_t count_unique(const listint_t *head)
{
const listint_t *t, *h;
size_t count = 1;
if (head == NULL || head->next == NULL)
return (0);
t = head->next;
h = (head->next)->next;
while (h)
{
if (t == h)
{
t = head;
while (t != h)
{
count++;
t = t->next;
h = h->next;
}
t = t->next;
while (t != h)
{
count++;
t = t->next;
}
return (count);
}
t = t->next;
h = (h->next)->next;
}
return (0);
}
/**
* print_listint_safe - A function that prints a listint_t list safely
* @head: A pointer to the first node
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count, i = 0;
count = count_unique(head);
if (count == 0)
{
for (; head != NULL; count++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}
else
{
for (i = 0; i < count; i++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf("-> [%p] %d\n", (void *)head, head->n);
}
return (count);
}
