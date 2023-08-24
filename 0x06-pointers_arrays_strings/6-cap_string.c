#include "main.h"
/**
 * *cap_string - A function that capitali
 * zes all words of a stirng
 *
 * @c: input pointer
 * Return: @c a pointer
*/
char *cap_string(char *c)
{
int i;
i = 0;
while (c[i])
{
while (!(c[i] >= 'a' && c[i] <= 'z'))
i++;
if (c[i - 1] == ' ' ||
c[i - 1] == '\t' ||
c[i - 1] == '\n' ||
c[i - 1] == ',' ||
c[i - 1] == ';' ||
c[i - 1] == '.' ||
c[i - 1] == '!' ||
c[i - 1] == '?' ||
c[i - 1] == '"' ||
c[i - 1] == '(' ||
c[i - 1] == ')' ||
c[i - 1] == '{' ||
c[i - 1] == '}' ||
i == 0)
c[i] -= 32;
i++;
}
return (c);
}
