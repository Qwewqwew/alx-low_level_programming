#include "main.h"
/**
 * print_binary - A function that prints the binary represntation
 * of a number
 * @n: integer value
*/
void print_binary(unsigned long int n)
{
int i, num = 0;
unsigned long int m;
for (i = 63; i >= 0; i--)
{
m = n >> i;
if (m & 1)
{
_putchar('1');
num++;
}
else if (num)
_putchar('0');
}
if (!num)
_putchar('0');
}
