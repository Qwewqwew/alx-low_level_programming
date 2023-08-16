#include <stdio.h>
/**
 * main - msin function
 *
 * Return: (0) on success
*/
int main(void)
{
long i = 0, j = 1, sum;
float total;
while (1)
{
sum = i + j;
if (sum > 4000000)
break;
else if ((sum % 2) == 0)
{
total += sum;
i = j;
j = sum;
}
}
printf("%.0f\n", total);
return (0);
}
