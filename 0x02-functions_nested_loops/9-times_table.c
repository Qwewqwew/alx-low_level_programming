#include <stdio.h>
#include "main.h"
/**
 * times_table - function to print times table
*/
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
_putchar('0');
for (j = 1; j < 10; j++)
{
_putchar(',');
k = i * j;
if (k < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else
{
_putchar(' ');
_putchar(k / 10 + '0');
_putchar(k % 10 + '0');
}
}
_putchar('\n');
}
}
