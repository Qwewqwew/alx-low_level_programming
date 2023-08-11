#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that ptints
 * lower case alphabet in reverse
 *
 * Return: (0) success
*/
int main(void)
{
char ch = 122;
while (ch > 96)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
