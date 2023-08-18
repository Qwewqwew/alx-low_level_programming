#include "main.h"
/**
 * main - A function that prints the largest prime factor for 612852475143
 *
 * Return: (0) on success
*/
int main(void)
{
long int i = 612852475143;
int j;
while (j < (i / 2))
{
if ((i % 2) == 0)
{
i /= 2;
continue;
}
for (j = 3; j < (i / 2); j += 2)
{
if (i % j == 0)
i /= j;
}
}
printf("%ld\n");
return (0);
}
