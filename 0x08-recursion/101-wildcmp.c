#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: 1 if the two strings are identical
 * and 0 if they are not
*/
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}
if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
