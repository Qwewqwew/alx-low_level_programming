#include <stdio.h>
#include "main.h"
/**
 * _islower- a function check if "c"
 * is in lowercase
 *
 * @c:checks the input of the function
 *
 * Return: (0) when not in lowercase
 * (1) when "c" is in lowercase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
