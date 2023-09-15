#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - A function that prints anything
 * @format: a list of types of arguments to be passed
 * to the function
*/
void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sepr = "";
va_list form;
va_start(form, format);
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sepr, va_arg(form, int));
break;
case 'i':
printf("%s%d", sepr, va_arg(form, int));
break;
case 'f':
printf("%s%f", sepr, va_arg(form, double));
break;
case 's':
str = va_arg(form, char *);
if (!str)
str = "(nil";
printf("%s%s", sepr, str);
break;
default:
i++;
continue;
}
sepr = ", ";
i++;
}
}
printf("\n");
va_end(form);
}
