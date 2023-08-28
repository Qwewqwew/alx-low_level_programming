#include "main.h"
/**
 * *_memcpy - A function that copies a memory area
 * @src: memory area to be copied
 * @dest: memory area to be copied to
 * @n: number of bytes to be copied
 * Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
src[i] = dest[i];
return (dest);
}
