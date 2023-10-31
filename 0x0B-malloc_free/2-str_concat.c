#include "main.h"
/**
 * *str_concat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to conct s1 and s2 or NULL
*/
char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0;
char *m;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
i++;
while (s2[j] != '\0')
j++;
m = malloc((i + j + 1) * sizeof(char));
if (m == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
m[i] = s1[i];
i++;
}
while (s2[j] != '\0')
{
m[i] = s2[j];
i++, j++;
}
m[i] = '\0';
return (m);
}
