#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints to 98
*
* @n: input to start counting from
*/
void print_to_98(int n)
{
if (n > 98)
{
for (; n > 97; n--)
{
printf("%d", n);
if (n > 98)
printf(", ");
}
}
else
{
for (; n < 99; n++)
{
printf("%d", n);
if (n < 98)
printf(", ");
}
}
printf("\n");
}
