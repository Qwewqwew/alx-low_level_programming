#include "main.h"
/**
 * binary_to_uint - A function that converts a binary number
 * into an unsigned integer
 * @b: a string which is the binary num
 * Return: the converted number or 0 if it contains characters
*/
unsigned int binary_to_uint(const char *b)
{
int bin;
unsigned int dec = 0;
if (!b)
return (0);
for (bin = 0; b[bin]; bin++)
{
if (b[bin] < '0' || b[bin] > '1')
return (0);
dec = 2 * dec + (b[bin] - '0');
}
return (dec);
}
