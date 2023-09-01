#include <stdio.h>
/**
 * main - a program that multiplies two integer if found
 * @argc: int
 * @argv: a pointer array
 * Return: (0) if success and (1) otherwise
*/
int main(int argc, char *argv[])
{
int mul;
if (argc == 3)
{
printf("%d = %s * %s\n", mul, argv[1], argv[2]);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
