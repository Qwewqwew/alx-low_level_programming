#include "main.h"
/**
 * print_rev - A function that prints a 
 * string in reverse
 *
 * @s: input that is an array 
*/
void print_rev(char *s)
{
int i;
for (i = 0; *s != '\0'; i++)
while(i--)
{
putchar(s[i]);
}
_putchar('\n');
}
