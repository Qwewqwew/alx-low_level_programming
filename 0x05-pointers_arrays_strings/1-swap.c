#include "main.h"
/**
 * swap_int - A function that swaps the value of two int
 * @a: first int
 * @b: secind int
*/
void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
