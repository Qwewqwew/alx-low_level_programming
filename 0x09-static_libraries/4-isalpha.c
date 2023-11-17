#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks if c is a letter
 *
 * @c: input to be checked
 *
 * Return: (0) not a letter
 * (1) when c is a letter
*/
int _isalpha(int c)
{
if (c >= 65 && c <= 90)
return (1);
if (c >= 97 && c <= 122)
return (1);
return (0);
}
