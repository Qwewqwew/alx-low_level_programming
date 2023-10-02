#include "main.h"
/**
 * create_file - A function that creats a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminate to create the file
 * Return: 1 on success or -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fi, wr_i, l = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
fi = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr_i = write(fi, text_content, l);
if (fi == -1 || wr_i == -1)
return (-1);
close(fi);
return (1);
}
