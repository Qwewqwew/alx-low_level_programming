#include "main.h"
/**
 * _isupper - function that tests wheathe
 * r the letter is in uppercase
 *
 * @c: input to be tested
 *
 * Return: (1) for uppercase (0) otherwise
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
