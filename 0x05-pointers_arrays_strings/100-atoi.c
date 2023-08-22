#include "main.h"
/**
 * _atoi - A function that converts a string to an int
 * @s: input that is an array
 *
 * Return: converted integers
*/
int _atoi(char *s)
{
unsigned int u = 0;
int i = -1;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '0')
u = (u * 10) + (*s - 0);
else if (u > 0)
break;
} while (*s++);
return (u *i);
}
