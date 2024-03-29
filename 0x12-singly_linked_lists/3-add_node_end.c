#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node_end - A function that adds a new
 * node at the end of a list_t list
 * @head: double pointer
 * @str: new string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *n;
list_t *i = *head;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = l;
n->next = NULL;
if (*head == NULL)
{
*head = n;
return (n);
}
while (i->next)
i = i->next;
i->next = n;
return (n);
}
