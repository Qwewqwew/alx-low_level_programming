#include "main.h"
/**
 * print_triangle - A functio that prints
 * a triangle
 *
 * @size: input that indicates the size
*/
void print_triangle(int size)
{
int i, j, k;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1; i <= size; i++)
{
for (j = (size - i); j >= 1; j--)
_putchar(' ');
for (k = 1; k <= i; k++)
_putchar(35);
_putchar('\n');
}
}
}
