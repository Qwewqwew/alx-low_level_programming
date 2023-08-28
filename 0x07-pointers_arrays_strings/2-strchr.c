#include "main.h"
/**
 * A function that locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: if c is found - a pointer to first occurance od c
 * if c is not found - NULL
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return ('\0');
}
