#include <stdio.h>
/**
 * main - main function
 *
 * Return: (0) success
*/
int main(void)
{
int i;
long n_1 = 0, n_2 = 1, res;
for (i = 0; i < 50; i++)
{
res = n_1 + n_2;
printf("%ld", res);
n_1 = n_2;
n_2 = res;
}
if (i == 49)
printf("\n");
else
printf(", ");
return (0);
}
