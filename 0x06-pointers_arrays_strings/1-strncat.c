#include "main.h"
/**
 * *_strncat - A function that concatenat
 * es two strings
 * @dest: input pointer
 * @src: input pointer
 * @n: input integer
 *
 * Return: pointer to @dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j;
while (dest[i])
i++;
for (j = 0; j < n && src[j] != '\0'; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}
