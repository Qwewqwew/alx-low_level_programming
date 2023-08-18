#include "main.h"
/**
 * main - A function that prints the largest prime factor for 612852475143
 *
 * Return: (0) on success
*/
int main(void)
{
long int n = 612852475143;
long int i, j;
for (i = 1; i <= n; i++)
{
if ((n % i) == 0)
{
if (n == i)
{
printf("%ld\n", n);
break;
}
j = n / i;
n = j;
}
}
return (0);
}
