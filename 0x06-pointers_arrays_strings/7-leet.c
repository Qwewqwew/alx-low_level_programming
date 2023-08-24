#include "main.h"
/**
 * *leet - A function that encodes a stri
 * ng to 1337
 * @mz: input pointer
 * Return: mz
*/
char *leet(char *mz)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";
for (i = 0; mz[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
if (mz[i] == a[j])
mz[i] = b[j];
}
return (mz);
}
