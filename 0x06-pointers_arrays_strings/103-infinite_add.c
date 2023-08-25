#include "main.h"
/**
 * *infinite_add - A function that adds 
 * two numbers
 * @n1: input number1
 * @n2: input number2
 * @r: the buffer to store the result
 * @size_r: the sze of the buffer
 *
 * Return: pointer to the result
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l = 0, i = 0, j = 0, k = 0;
int val1 = 0, val2 = 0, res = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (j >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || l == 1)
{
if (i < 0)
val1 = 0;
else
val1 = *(n1 + i) - '0';
if (j < 0)
val2 = 0;
else
val2 = *(n2 + j) - '0';
res = val1 + val2 + l;
if (res >= 10)
l = 1;
else
l = 0;
if (k >= (size_r - 1))
return (0);
*(r + k) = res % 10 + '0';
k++;
j--;
i--;
}
if (k == size_r)
return (0);
*(r + k) = '\0';
rev_string(r);
return (r);

}
