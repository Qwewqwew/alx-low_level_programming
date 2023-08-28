#include "main.h"
/**
 * *_strstr - A function that locates a substring
 * @needle: a substring to be locted
 * @haystack: a string to locate needle on
 * Return: A pointer to the beggining of
 * located substring if found and NULL if not
*/
char *_strstr(char *haystack, char *needle)
{
int i;
if (*needle == 0)
return (haystack);
while (*haystack)
{
i = 0;
if (haystack[i] == needle[i])
{
do {
if (needle[i + 1] == '\0')
return (haystack);
i++;
} while (haystack[i] == needle[i]);
}
haystack ++;
}
return ('\0');
}
