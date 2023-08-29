#include "main.h"
/**
 * *_strstr - A function that locates a substring
 * @needle: a substring to be locted
 * * @haystack: a string to locate needle on
 * Return: A pointer to the beggining of
 * located substring if found and NULL if not
*/
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
for (; *haystack != '\0'; haystack++)
{
h = haystack;
n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
