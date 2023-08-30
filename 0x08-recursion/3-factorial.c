#include "main.h"
/**
 * factorial - A function that returns the factorial of
 * given number
 * @n: input integer to calculate the factorial of
 * Return: the factorial of n
*/
int factorial(int n)
{
int fact = 1;
if (n > 0)
{
fact *= factorial(n);
n--;
}
return (fact);
}
