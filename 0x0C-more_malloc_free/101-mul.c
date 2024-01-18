#include "main.h"
#define ERR_MSG "Error"
/**
 * digit - determines if the string is all digits
 * @a: string
 * Return: 1 if all digits , 0 otherwise
*/
int digit(char *a)
{
int i = 0;
while (a[i])
{
if (a[i] < '0' || a[i] > '9')
return (0);
i++;
}
return (1);
}
/**
 * length - return the length of a string
 * @a: string
 * Return: the length of a
*/
int length(char *a)
{
int i = 0;
while (a[i] != '\0')
{
i++;
}
return (i);
}
/**
 * error - checks for errors
*/
void error(void)
{
printf("Error\n");
exit(98);
}
/**
 * main - A function that multiplies two positive numbers
 * @argc: integer
 * @argv: array
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
char *m1, *m2;
int l1, l2, l, i, j, d1, d2, *res, k = 0;
m1 = argv[1], m2 = argv[2];
if (argc != 3 || !digit(m1) || !digit(m2))
error();
l1 = length(m1);
l2 = length(m2);
l = l1 + l2 + 1;
res = malloc(sizeof(int) * l);
if (!res)
return (1);
for (i = 0; i <= (l1 + l2); i++)
res[i] = 0;
for (l1 = (l1 - 1); l1 >= 0; l1--)
{
d1 = m1[l1] - '0';
j = 0;
for (l2 = length(m2) - 1; l2 >= 0; l2--)
{
d2 = m2[l2] - '0';
j += res[l1 + l2 + 1] + (d1 *d2);
res[l1 + l2 + 1] = j % 10;
j /= 10;
}
if (j > 0)
res[l1 + l2 + 1] += j;
}
for (i = 0; i < l - 1; i++)
{
if (res[i])
k = 1;
if (k)
_putchar(res[i] + '0');
}
if (!k)
_putchar('0');
_putchar('\n');
free(res);
return (0);
}
