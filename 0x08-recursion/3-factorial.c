#include "main.h"
/**
 * factorial - A function that returns the factorial of
 * given number
 * @n: input integer to calculate the factorial of
 * Return: the factorial of n
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (0);
}
return (n * factorial(n - 1));
}
