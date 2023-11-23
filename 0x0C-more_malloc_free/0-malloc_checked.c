#include "main.h"
/**
 * *malloc_checked - A function that allocates memory using
 * malloc
 * @b: integer that is a number of bytes
 * Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *m;
m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}
