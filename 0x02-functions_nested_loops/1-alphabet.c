#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function to print a to z
 *
 * Description: c program that prints
 * alphabet in lowercase
 *
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
