#include "main.h"
/**
 * *_strcat - A function that concatenate
 * s two strings
 *
 * @dest: input array
 * @src: input array
 *
 * Return: poiner to string @dest
*/
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i])
i++
for (j = 0; src[j]; j++)
dest[i++] = src[j];
return (dest);
}
