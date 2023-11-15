#include "main.h"
#include <stdio.h>
/**
 * check - checks all num < n
 * @n: input
 * @i: input
 * Return: input
*/
int check(int n, int i)
{
if (i >= n && n > 1)
return (1);
else if (n % i == 0 || n <= 1)
return (0);
else
return (check(n, i + 1));
}
/**
 * is_prime_number - A function that returns 1 if the
 * input is a prime number and 0 if otherwise
 * @n: input integer
 * Return: 1 if prime number an 0 if not
*/
int is_prime_number(int n)
{
return (check(n, 2));
}
