#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
i -= 1;
for ( ; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
