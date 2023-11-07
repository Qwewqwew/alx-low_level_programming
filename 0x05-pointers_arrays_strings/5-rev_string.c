#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
char temp;
int i, j;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; j < i / 2; j++)
{
temp = s[j];
s[j] = s[i - 1 - j];
s[i - 1 - j] = temp;
}
}
