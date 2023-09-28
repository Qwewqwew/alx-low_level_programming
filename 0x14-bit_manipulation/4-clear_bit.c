#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit to 0
 * at a given index
 * @n: the number
 * @index: index starting from 0
 * Return: 1 if works and -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
