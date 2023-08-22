#include "main.h"
/**
 * _strlen- A function that returns the
 * length of the string
 * @s: input represents an array
 *
 * Return: the length of the string
*/
int _strlen(char *s)
{
int num;
for (num = 0; *s != '\0'; s++)
num++;
return (num);
}
