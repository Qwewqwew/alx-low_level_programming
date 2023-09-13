#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A functuon that prints a name using pointer
 * to function
 * @name: string
 * @f: pointer to the function
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
