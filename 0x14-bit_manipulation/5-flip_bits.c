#include "main.h"
/**
 * flip_bits - A function that writes the number of bits needed
 * to flip from one number to the other
 * @n: the first num
 * @m: the second num
 * Return: the number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, num = 0;
unsigned long int r;
unsigned long int e = n ^ m;
for (i = 63; i >= 0; i--)
{
r = e >> i;
if (r & 1)
num++;
}
return (num);
}
