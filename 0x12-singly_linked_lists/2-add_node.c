#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * *add_node - A function that adds a new node at the beginning
 * of a list_t list
 * @head: double pointer
 * @str: a new string
 * Return: the address of the new element or NULL on failure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *n;
unsigned int l = 0;
while (str[l])
l++;
n = malloc(sizeof(list_t));
if (!n)
return (NULL);
n->str = strdup(str);
n->len = l;
n->next = (*head);
(*head) = n;
return (*head);
}
