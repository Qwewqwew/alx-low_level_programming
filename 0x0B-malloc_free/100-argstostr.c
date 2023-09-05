#include "main.h"
/**
 * *argstostr - A function that concatenates all the
 * arguments of a program
 * @ac: int
 * @av: douple pointer array
 * Return: a pointer to a new string or NULL
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0, l = 0;
char *m;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
l++;
}
l += ac;
m = malloc((l + 1) * sizeof(char));
if (m == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
m[k] = av[i][j];
k++;
}
if (m[k] == '\0')
{
m[k++] = '\n';
}
}
return (m);
}
