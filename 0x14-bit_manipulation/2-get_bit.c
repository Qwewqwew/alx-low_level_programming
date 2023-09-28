#include "main.h"
/**
 * get_bit - A function that returns the value of a bit at
 * a given index
 * @n: the number
 * @index: index
 * Return: the value of a bit at a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bv;
if (index > 63)
return (-1);
bv = (n >> index) & 1;
return (bv);
}
