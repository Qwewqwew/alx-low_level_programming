#include <stdi.h>
#include "main.h"
/**
 * _islower - a function that checks wether c is in lowercase
 *
 * 0c: checks input
 *
 * Return: (0) non lowercase (1) lowercase
*/
int _islower(int c);
{
	int i;

	if (c >= 'a' && c <= 'z')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
