#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks the sign of "n"
 *
 * @n: input to be checked
 *
 * Return: 1 for +, 0 for zero, (-1) for -
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
}
