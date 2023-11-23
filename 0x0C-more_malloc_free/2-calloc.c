#include "main.h"
/**
 * *_memo - put contant byte in memory
 * @a: memory to be filled
 * @b: char to coby
 * @c: number
 * Return: a pointer to a
*/
char *_memo(char *a, char b, unsigned int c)
{
unsigned int d;
for (d = 0; d < c; d++)
a[d] = b;
return (a);
}
/**
 * *_calloc - A function that allocates memory for an array
 * using malloc
 * @nmemb: number of elements
 * @size: number of bytes
 * Return: a pointer to the allocated memory or NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *m;
if (nmemb == 0 || size == 0)
return (NULL);
m = malloc(size * nmemb);
if (m == NULL)
return (NULL);
_memo(m, 0, (nmemb * size));
return (m);
}
