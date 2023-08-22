#include "main.h"
/**
 * *_strcpy - A function that copies the
 * string pointed to src to the buffer
 * dest
 * @dest: input that is the buffer
 *
 * @src: input that is an array
 *
 * Return: returns the copy dest
*/
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}
