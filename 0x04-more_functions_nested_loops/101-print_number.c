#include "main.h"
/**
 * print_number - A function that prints an integer
 *
 * @n: input to be printed
*/
void print_number(int n);
{
int i = n;
if (n < 0)
{
_putchar('-');
i = -i;
}
if ((i / 10) > 0)
print_number(i / 10);
_putchar(i % 10 + 48);
}
