#include "main.h"
/**
 * print_rev - A function that prints a string in reverse
 * @s: the string ti be printed in reverse
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
for ( ; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
