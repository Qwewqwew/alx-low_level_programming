#include "main.h"
/**
 * _isdigit - A function that tests if the input is a digit
 *
 * @c: input to be tested
 *
 * Return: (1) if it is a digit (0) otherwise
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
