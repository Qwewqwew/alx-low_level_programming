#include "main.h"
/**
 * cw - A function to count the number of words
 * @s: string
 * Return: number of words
*/
int cw(char *s)
{
int i = 0, j, k = 0;
for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == ' ')
i = 0;
else if (i == 0)
{
i = 1;
k++;
}
}
return (k);
}
/**
 * **strtow - A function that splits a string into words
 * @str: string to be splited
 * Return: a pointer to an array of strings or NULL
*/
char **strtow(char *str)
{
char **m, *n;
int x, y = 0, z = 0, w, c = 0, st, ed;
while (*(str + z))
z++;
w = cw(str);
if (w == 0)
return (NULL);
m = (char **) malloc((w + 1) * sizeof(char *));
if (m == NULL)
return (NULL);
for (x = 0; x <= z; x++)
{
if (str[x] == ' ' || str[x] == '\0')
{
if (c)
{
ed = x;
n = (char *) malloc((c + 1) * sizeof(char));
if (n == NULL)
return (NULL);
while (st < ed)
*n++ = str[st++];
*n = '\0';
m[y] = n - c;
y++;
c = 0;
}
}
else if (c++ == 0)
st = x;
}
m[y] = NULL;
return (m);
}
