#include <stdio.h>
#include "main.h"
/**
 * print_times_table - a function prints the n times table
 *
 * @n: input for n times table
*/
void print_times_table(int n)
	{
int i, j, l;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
putchar('0');
for (j = 1; j <= n; j++)
{
putchar(',');
putchar('.');
l = i * j;
if (l < 10)
{
putchar('.');
putchar('.');
putchar(l + '0');
}
else if (l < 100)
{
putchar('.');
putchar(l / 10 + '0');
putchar(l % 10 + '0');
}
else
{
putchar(l / 100 + '0');
putchar((l / 100) % 10 + '0');
putchar(l % 10 + '0');
}
}
putchar('\n');
}
}
}
