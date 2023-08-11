#include <unistd.h>
/**
 * main - main function
 *
 * Description: c program using fwrite function
 *
 * Return: (1) fail
*/
int main(void)
{
char error[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(1, error, 59);
return (1);
}
