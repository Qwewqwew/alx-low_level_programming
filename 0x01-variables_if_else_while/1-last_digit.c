#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: a function that receives an int
 * and deterimens the last digit
 * then test if it was geater than 5
 * or zero or between 0 and 6
 * Return: (0) success
*/
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
return (0);
}
