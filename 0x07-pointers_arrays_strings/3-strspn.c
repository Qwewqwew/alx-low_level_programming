#include "main.h"
/**
 * _strspn - A function that gets the length of a prefix substring
 * @accept: the prefix
 * @s: the string
 * Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b = 0;
int i;
while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
b++;
break;
}
else if (accept[i + 1] == '\0')
return (b);
}
s++;
}
}
