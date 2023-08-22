#include "main.h"
/**
 * print_array - A function that prints
 * n elements of the array
 *
 * @a: input that is the array
 *
 * @n: input thay is number of elements
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
printf("\n");
}
