#include "main.h"
/**
 * get_endianness - A function that checks the endianness
 * Return: 0 on big indian or 1 on little indian
*/
int get_endianness(void)
{
unsigned int n = 1;
char *ch = (char *) &n;
return (*ch);
}
