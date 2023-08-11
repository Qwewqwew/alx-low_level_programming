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
char l;
char U;
for (l = 97; l < 123; l++)
{
putchar(l);
}
for (U = 65; U < 91; U++)
{
putchar(U);
}
putchar('\n');
return (0);
}
