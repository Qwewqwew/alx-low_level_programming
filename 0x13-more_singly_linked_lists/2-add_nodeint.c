#include "lists.h"
/**
 * *add_nodeint - A function that adds a new code at the beggining
 * of a linked list
 * @head: double pointer
 * @n: integer value
 * Return: the address of the new element or NULL on failure
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *first_node;
first_node = malloc(sizeof(listint_t));
if (!first_node)
return (NULL);
first_node->n = n;
first_node->next = *head;
*head = first_node;
return (first_node);
}
