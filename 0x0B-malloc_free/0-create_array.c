#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: int size of the array
 * @c: intiaized char
 * Return: pointer to an array or NULL
*/
char *create_array(unsigned int size, char c)
{
char *i = malloc(size);
if (size == 0 || i == 0)
return (0);
while (size--)
i[size] = c;
return (i);
}
