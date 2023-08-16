#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that returns the last digit
 *
 * @i: input to return its last digit
 *
 * Return: last digit
*/
int print_last_digit(int i)
{
int last_digit;
last_digit = i % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
