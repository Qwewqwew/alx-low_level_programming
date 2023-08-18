#include "main.h"
/**
 * print_square - A function that  prints
 * a square
 *
 * @size: input to tell the size of the square
*/
void print_square(int size)
{
int i, j;
for (i = 0; i < size; i++)
{
putchar(35);
for (j = 0; j < size; j++)
{
putchar(35);
}
putchar('\n');
}
}
