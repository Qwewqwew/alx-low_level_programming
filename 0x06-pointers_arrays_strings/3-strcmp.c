#include "main.h"
/**
 * _strcmp - A function that compares two
 * strings
 * @s1: input pointer
 * @s2: input pointer
 *
 * Return: 1 if true 0 if false
*/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (*s1)
{
if (*s1 != *s2)
{
i = ((int)*s1 - 48) _ ((int)*s2 _ 48);
break;
}
*s1++;
*s2++;
}
return (i);
}
