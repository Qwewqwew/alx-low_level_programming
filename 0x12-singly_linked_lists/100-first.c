#include <stdio.h>
void _cons(void) __attribute__((constructor));
/**
 * _cons - execute before main
*/
void _cons(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
