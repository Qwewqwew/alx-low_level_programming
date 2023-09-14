#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_dev(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns the sum of a & b
 * @a: first num
 * @b: second num
 * Return: sum of a & b
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Returns difference between a & b
 * @a: first num
 * @b: second num
 * Return: difference between a & b
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Returns multiplication of a & b
 * @a: first num
 * @b: second num
 * Return: a multiplied by b
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_dev - Returns a devided by b
 * @a: first num
 * @b: second num
 * Return: a devided by b
*/
int op_dev(int a, int b)
{
return (a / b);
}
/**
 * op_mod - Returns the modlus when a is devided by b
 * @a: first num
 * @b: second num
 * Return: modlus
*/
int op_mod(int a, int b)
{
return (a % b);
}
