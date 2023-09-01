#include "main.h"
/**
 * *_strpbrk - A function that searches a string of any
 * set of bytes
 * @s: string
 * @accept: string
 * Return: a pointer to a byte of s that matches
 * one of the bytes of accept if found and NULL if not
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
i = 0;
while (s[i] != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (accept[j] == s[i])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return (0);
}
