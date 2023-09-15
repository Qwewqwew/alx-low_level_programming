#include <stdio.h>
#include <stdlib>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success
*/
int main(int aegc, char *argv[])
{
int bytes, i;
char *ar;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
esit(2);
}
ar = (char *)main;
for (i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", ar[i]);
break;
}
printf("%02hhx", ar[i]);
}
return (0);
}
