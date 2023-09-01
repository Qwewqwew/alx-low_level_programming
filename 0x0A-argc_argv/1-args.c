#include <stdio.h>
/**
 * main - A program that prints the number of arguments
 * @argc: int
 * @argv: a pointer array
 * Return: (0)
*/
int main(int argc, char **argv)
{
(void) argv;
printf("%d\n", (argc - 1));
return (0);
}
