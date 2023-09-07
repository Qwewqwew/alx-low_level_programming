#include "main.h"
/**
 * *_realloc - A function that reallocates a memory block
 * using malloc an free
 * @ptr: the memory block
 * @old_size: the size allocated for the block
 * @new_size: the new size after allocating
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *m1;
char *m2;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
m1 = malloc(new_size);
if (!m1)
return (NULL);
if (new_size < old_size)
{
for (i = 0; i < new_size; i++)
m1[i] = m2[i];
}
if (new_size > old_size)
{
for (i = 0; i < old_size; i++)
m1[i] = m2[i];
}
free(ptr);
return (m1);
}
