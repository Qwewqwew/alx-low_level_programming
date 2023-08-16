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
putchar('0');
for (j = 0; j < 10; j++)
{
putchar(',');
putchar(' ');
k = i * j;
if (k < 10)
{
putchar(' ');
putchar(k + '0');
}
else
{
putchar(k / 10 + '0');
putchar(k % 10 + '0');
}
}
putchar('\n');
}
}
