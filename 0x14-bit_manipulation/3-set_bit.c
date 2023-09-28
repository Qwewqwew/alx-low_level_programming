#include "main.h"
/**
 * set_bit - A function that sets the value of a bit to 1
 * at a given index
 * @n: the number
 * @index: index
 * Return: 1 on success or -1 on errors
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
