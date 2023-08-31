#include "main.h"
/**
 * _sqrt_recursion - A function that returns a natural
 * square root of a number
 * @n: input integer to find the the root to
 * Return: the natural square root if found or -1
 * if no
*/
int act_sqrt(int n, int val)
int _sqrt_recursion(int n)
{
return (act_sqrt(n, 1));
}

/**
 * act_sqrt - calculate the square
 * @n: input to find the sqr for
 * @val: input sqr root
 * return:int
*/

int act_sqrt(int n, int val)
{
if (val * val == n)
return (val);
else if (val * val < n)
return (act_sqrt(n, (val - 1)));
}
