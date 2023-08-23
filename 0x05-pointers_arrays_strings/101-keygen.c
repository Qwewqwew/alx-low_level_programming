#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description: A program that generates
 * random valid passwords
 *
 * Return: (0) on success
*/
int main (void)
{
int s;
char c;
srand(time(NULL));
while (s <= 2500)
{
c = rand() % 78;
s += c;
putchar(c);
}
putchar(2772 - s);
return (0);
}
