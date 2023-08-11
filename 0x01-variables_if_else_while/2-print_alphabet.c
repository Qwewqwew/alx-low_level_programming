#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints lower case
 *  alphabet using for loop
 *
 *  Return: (0) success
*/
int main(void)
{
char ch;
for (ch = 97 ; ch < 123 ; ch++)
{
putchar(ch);
putchar('\n');
}
return (0);
}
