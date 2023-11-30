#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its
 * parameter
 * @n: The number of parameters
 * @...: A variable number of parameter
 * Return: 0 if n == 0 and the sum otherwise
*/
int sum_them_all(const unsigned int n, ...)
{
va_list op;
unsigned int i, sum = 0;
va_start(op, n);
for (i = 0; i < n; i++)
sum += va_arg(op, int);
va_end(op);
return (sum);
}
