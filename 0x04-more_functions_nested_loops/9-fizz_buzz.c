#include "main.h"
/**
 * main - entry point
 *
 * Description: A function that prints num from 1 to 100
 * num multplies to 3 print Fizz
 * num multiplies to 5 prinr Buzz
 * num multiplies to 3 and 5 print FizzBuzz
 * other nums print as is
 *
 * Return: (0) on success
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
printf("Fizz ");
else if (i % 5 == 0 && i % 3 != 0)
printf("Buzz ");
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else
printf("%d ", i);

}
return (0);
}
