#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) success
*/
int main(void)
{
int i;
int j = 0;
for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
j = j + i;
}
}
printf("%d\n", j);
return (0);
}
