#include <stdio.h>
/**
 * main - entry point
 *
 * Description: c program that prints
 * lower case then uppper case letters
 * using for loop
 *
 * Return: (0) success
*/
int main(void)
{
char l = 97;
char U = 65;
while (l < 123)
{
putchar(l);
l++;
}
while (U < 91)
{
putchar(U);
U++;
}
putchar('\n');
return (0);
}
