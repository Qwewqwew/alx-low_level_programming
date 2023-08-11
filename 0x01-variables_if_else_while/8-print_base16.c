#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints
 * single digit hexadecimal
 *
 * Return: (0) success
*/
int main(void)
{int n = 48;
char ch = 97;
while (n < 58)
{
putchar(n);
n++;
}
while (ch < 103)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
