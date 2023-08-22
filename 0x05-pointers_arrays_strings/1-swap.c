#include "main.h"
/**
 * swap_int- A function that swaps the
 * value of two integers
 *
 * @a: input that represents a pointer
 *
 * @b: input that represents a pointer
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
