#include "main.h"
/**
 * *_memset - A function that fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte to fill the memory area
 * @n: number of bytes to be filled by b
 * Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned in i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
