#include "main.h"
/**
 * length - return the length of the string (counts
 * the null)
 * @s: input pointer
 * Return: l the length
*/
int length(char *s)
{
int l = 0;
if (*s > '\0')
l += length(s + 1) + 1;
return (l);
}
/**
 * verify_pal - verify for the palindrome
 * @s: string
 * @st: input from the start of string
 * @nd: input from the end of string
 * @modul: input nd % 2
 * Return: int
*/
int verify_pal(char *s, int st, int nd, int modul)
{
if ((st == nd && (modul != 0)) || (st == (nd + 1) && (modul == 0)))
return (1);
else if (s[st] != s[nd])
return (0);
else
return (verify_pal(s, (st + 1), (nd - 1), modul));
}
/**
 *is_palindrome - checks if string is palindrome
 * @s: input pointer to a string
 * Return: 1 if palindrom and 0 if not
*/
int is_palindrome(char *s)
{
int nd = length(s);i
return (verify_pal(s, 0, (nd - 1), (nd % 2)));
}
