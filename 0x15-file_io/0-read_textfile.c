#include "main.h"
/**
 * read_textfile - A functuin that writes a text file and prints
 * it to the POSIX std output
 * @filename: the text file
 * @letters: number of letters
 * Return: the actual number if letters it could read and print or NULL
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *a;
ssize_t b;
ssize_t c;
ssize_t d;
b = open(filename, O_RDONLY);
if (b == -1)
return (0);
a = malloc(sizeof(char) * letters);
d = read(b, a, letters);
c = write(STDOUT_FILENO, a, d);
free(a);
close(b);
return (c);
}
