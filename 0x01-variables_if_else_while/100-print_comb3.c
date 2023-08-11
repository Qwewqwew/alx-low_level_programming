#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that printaall
 * possible combination of 2 digits
 *
 * Return: (0) success
*/
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
if (i != j && j > i)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
