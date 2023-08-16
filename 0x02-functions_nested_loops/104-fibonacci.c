#include <stdio.h>
/**
 * main - entry point
 *
 * Return: (0) on success
*/
int main(void)
{
int c;
unsigned long f_1 = 0, f_2 = 1, sum;
unsigned long f_1_1, f_1_2, f_2_1, f_2_2;
unsigned long num_1, num_2;
unsigned long max = 100000000;
for (c = 0; c < 92; c++)
{
sum = f_1 + f_2;
printf("%lu, ", sum);
f_1 = f_2;
f_2 = sum;
}
f_1_1 = f_1 / max;
f_2_1 = f_2 / max;
f_1_2 = f_1 % max;
f_2_2 = f_2 % max;
for (c = 93; c < 96; c++)
{
num_1 = f_1_1 + f_2_1;
num_2 = f_1_2 + f_2_2;
if (num_2 >= max)
{
num_1 += 1;
num_2 %= max;
}
printf("%lu%lu", num_1, num_2);
if (c != 95)
printf(", ");
f_1_1 = f_2_1;
f_1_2 = f_2_2;
f_2_1 = num_1;
f_2_2 = num_2;
}
printf("\n");
return (0);
}
