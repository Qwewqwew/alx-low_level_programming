#include "main.h"
/**
 * *_strdup - function returns a pointer to a new string which
 * is a duplicate of the string
 * @str: string to be duplicated
 * Return: a pointer to the new string
*/
char *_strdup(char *str)
{
int i = 0, j;
char *n;
if (str == NULL)
return (NULL);
while (str[i] != '\0')
i++;
n = malloc((i + 1) * sizeof(char));
if (n == NULL)
return (NULL);
for (j = 0; str[j]; j++)
n[j] = str[j];
return (n);
}
