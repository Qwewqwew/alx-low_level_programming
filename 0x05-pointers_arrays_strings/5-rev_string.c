#include "main.h"
/**
 * rev_string: A functuon that reverses
 * a string
 *
 * @s: input that is an array
*/
void rev_string(char *s)
{
int i = 0;
int j;
char c;
for (i = 0; s[i] != '\0'; ++i)
;
for (j = 0; j < i / 2; i++)
{
c = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = c;
}
}
