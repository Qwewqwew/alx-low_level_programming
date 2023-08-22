#include "main.h"
/**
 * _atoi - A function that converts a string to an int
 * @s: input that is an array
 *
 * Return: converted integers
*/
int _atoi(char *s)
{
unsigned int num = 0;
int sign = 1
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - 0);
else if (num > 0)
break;
} while (*s++);

return (num * sign);
}
