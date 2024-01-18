#include "main.h"
/**
 * *array_range - A function that creates an array of integer
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
int *m;
int i, j;
if (min > max)
return (NULL);
j = max - min + 1;
m = malloc(sizeof(int) * j);
if (m == NULL)
return (NULL);
for (i = 0; min <= max; i++)
m[i] = min++;
return (m);
}
