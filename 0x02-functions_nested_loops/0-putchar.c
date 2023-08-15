#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: c program that prints _putchar
 *
 * Return: (0) success
*/
int main(void)
{
	char string[] = "_putchar";
	int ch;

	for (ch = 0; ch < 9; ch++)
	{
		putchar(string[ch]);
	}
	putchar('\n');
	return (0);
}
