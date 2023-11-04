#include "main.h"
/**
 * _strlen - A function that returns the length of a string
 * @s : string to retrun its length
 * Return: length of the string
*/
int _strlen(char *s)
{
int i = 0, count = 0;
while (s[i] != '\0')
{
count = i;
i++;
}
count += 1;
return (count);
}
