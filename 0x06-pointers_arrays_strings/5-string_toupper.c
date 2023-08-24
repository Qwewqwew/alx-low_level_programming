#include "main.h"
/**
 * *string_toupper - A function that chan
 * ges lowercase letters to upper case
 * @c: input pointer
 *
 * Return: c
*/
char *string_toupper(char *c)
{
int i;
i = 0;
while (c[i] != '\0')
{
if (c[i] >= 'a' && c[i] <= 'z')
c[i] = c[i] - 32;
i++;
}
return (c);
}
