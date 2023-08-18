#include "main.h"
/**
 * print_line - A function thatt draws a
 * line in the terminal
 *
 * @n: input for how many times should _
 * be repeated
*/
void print_line(int n)
{
int i;
for (i = 1; i <= n; i++)
_putchar('_');
_putchar('\n');
}
