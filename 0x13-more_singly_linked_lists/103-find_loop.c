#include "lists.h"
/**
 * *find_listint_loop -  a function that finds the loop in a linked list
 * @head: linked list
 * Return: the address of the node where the loop started or NULL
 * if there's no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *f_1 = head;
listint_t *f_2 = head;
if (!head)
return (NULL);
while (f_1 && f_2 && f_2->next)
{
f_2 = f_2->next->next;
f_1 = f_1->next;
if (f_2 == f_1)
{
f_1 = head;
while (f_1 != f_2)
{
f_1 = f_1->next;
f_2 = f_2->next;
}
return (f_2);
}
}
return (NULL);
}
