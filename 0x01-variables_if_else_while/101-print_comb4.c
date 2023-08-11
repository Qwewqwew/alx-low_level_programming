#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints all
 * possible combinations of 3 digits
 *
 * Return: (0) success
*/
int main(void)
{
int i, j, k;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (k > j && j > i)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 || j != 56 || k != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
