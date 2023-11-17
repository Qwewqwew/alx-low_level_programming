#include "main.h"
/**
 * _puts - A function that prints a string
 * @str: input which is an array that represents a string
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
