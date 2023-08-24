#include "main.h"
/**
 * reverse_array - A function that revers
 * es the content of an array of integers
 *
 * @a: input array
 * @n: input integer
*/
void reverse_array(int *a, int n)
{
int i;
int rev;
for (i = 0; i < n--; i++)
{
rev = a[i];
a[i] = a[n];
a[n] = rev;
}
}
