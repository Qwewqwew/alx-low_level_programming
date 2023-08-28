#include "main.h"
/**
 * print_diagsums - A function that prints the sum of the two
 * diagonals of a squared matrix
 * @a: input
 * @size: input
*/
void print_diagsums(int *a, int size)
{
int i, j = 0, k = 0;
for (i = 0; i < size; i++)
{
j += a[i];
k += a[size - i - 1];
a += size;
}
printf("%d, ", j);
printf("%d\n", k);
}
