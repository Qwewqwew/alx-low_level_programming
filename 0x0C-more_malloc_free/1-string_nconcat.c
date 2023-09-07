#include "main.h"
/**
 * *string_nconcat - A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to a newly allocated space in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *m;
unsigned int i = 0, j = 0, l1 = 0, l2 = 0;
while (s1 && s1[l1])
l1++;
while (s2 && s2[l2])
l2++;
if (n < l2)
m = malloc(sizeof(char) * (l1 + n + 1));
else
m = malloc(sizeof(char) * (l1 + l2 + 1));
if (!m)
return (NULL);
while (i < l1)
{
m[i] = s1[i];
i++;
}
while (n < l2 && i < (l1 + l2))
m[i++] = s2[j++];
m[i] = '\0';
return (m);
}
