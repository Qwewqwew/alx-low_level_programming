#include "main.h"
/**
 * **alloc_grid - A function that returns a pointer to a 2
 * dimensional array
 * @width: width input
 * @height: height input
 * Return: a pointer to a 2 dim array or NULL
*/
int **alloc_grid(int width, int height)
{
int i, j, **m;
if (width <= 0 || height <= 0)
return (NULL);
m = malloc(height * sizeof(int *));
if (m == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
m[i] = malloc(width * sizeof(int));
if (m[i] == NULL)
{
for (; i >= 0; i--)
free(m[i]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
m[i][j] = 0;
}
return (m);
}
