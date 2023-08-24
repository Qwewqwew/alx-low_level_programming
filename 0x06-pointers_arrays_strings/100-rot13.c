#include "main.h"
/**
 * *rot13 - A function that encodes a str
 * ing using rot13
 * @r: input pointer
 *
 * Return: *r
*/
char *rot13(char *r)
{
int i, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; r[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
if (r[i] == a[j])
{
r[i] = b[j];
break;
}
}
return (r);
}
