#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints all
 * single dugits base 10
 * using putchar
 *
 * Return: (0) success
*/
int main(void)
{
int i = 48;
while (i < 58)
{
putchar(i);
i++;
}
putchar('\n');
return (0);
}
