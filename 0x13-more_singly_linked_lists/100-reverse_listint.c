#include "lists.h"
/**
 * *reverse_listint - A function that reverse a listint_t linked list
 * @head: A pointer to the first node
 * Return: A pointer to the first node of a reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *bef = NULL;
listint_t *af = NULL;
while (*head)
{
af = (*head)->next;
(*head)->next = bef;
bef = *head;
*head = af;
}
*head = bef;
return (*head);
}
