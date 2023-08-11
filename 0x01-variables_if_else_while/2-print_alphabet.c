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
char ch = 97;
while (ch < 123)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
