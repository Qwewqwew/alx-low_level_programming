#include "main.h"
/**
 * err_f - A function that tests if the file can be opened or not
 * @file_from: the file from
 * @file_to: the file to
 * @argv: an array of the arguments
*/
void err_f(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - checks the code
 * @argc: number of argument
 * @argv: an array of the arguments
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
int file_from, file_to, err_c;
ssize_t nch, nw;
char buff[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
err_f(file_from, file_to, argv);
nch = 1024;
while (nch == 1024)
{
nch = read(file_from, buff, 1024);
if (nch == -1)
err_f(-1, 0, argv);
nw = write(file_to, buff, nch);
if (nw == -1)
err_f(0, -1, argv);
}
err_c = close(file_from);
if (err_c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
