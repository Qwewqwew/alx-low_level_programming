#include "main.h"
/**
 * print_diagonal - A function that print
 * s a diagonal line
 *
 * @n: input to tell how many '\' to print
*/
void print_diagonal(int n)
{
int n = 10;
int i, j;
for (i = 1; i <= n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
