#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number of
 * coins to make a change
 * @argc: int
 * @argv: a pointer array
 * Return: (0) success , (1) otherwise
*/
int main(int argc, char *argv[])
{
int i, change = 0, money = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
if (argc == 2)
{
for (i = 0; i < 5; i++)
{
if (money >= cents[i])
{
change += money / cents[i];
money %= cents[i];
if (money % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", change);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
