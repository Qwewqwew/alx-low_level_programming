#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints all
 * possible combinations of single digits
 *
 * Return: (0) success
*/
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
if (i < 57)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
