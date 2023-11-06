#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: the string ti be printed in reverse
*/
void print_rev(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
continue;
i -= 1;
for ( ; s[i] >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
