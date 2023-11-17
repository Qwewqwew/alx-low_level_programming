#include "main.h"
/**
 * _atoi - A function that converts a string to an int
 * @s: input that is an array
 *
 * Return: converted integers
*/
int _atoi(char *s)
{
int i = 0;
int d = 0;
int n = 0;
int l = 0;
int f = 0;
int g = 0;
while (s[l] != '\0')
l++;
while (i < l && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
g = s[i] - '0';
if (d % 2)
g = -g;
n = n * 10 + g;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}
