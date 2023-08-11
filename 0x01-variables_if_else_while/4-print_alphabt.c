#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that lists lower
 * case alphabet except q and e
 *
 * Return: (0) success
*/
int main(void)
{
char c = 97;
while (c < 123)
{
if (c != 101 && c != 113)
putchar(c);
c++;
}
putchar('\n');
return (0);
}
