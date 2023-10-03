#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - checks the file if it is an ELF
 * @e_ident: pointer ti the array which contains ELF magic number
*/
void check_elf(unsigned char *e_ident)
{
int ix;
for (ix = 0; ix < 4; ix++)
{
if (e_ident[ix] != 127 &&
e_ident[ix] != 'E' &&
e_ident[ix] != 'L' &&
e_ident[ix] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - A function that prints the ELF magic number
 * @e_ident: pointer to the array which contains ELF magic num
*/
void print_magic(unsigned char *e_ident)
{
int ix;
printf(" Magic: ");
for (ix = 0; ix < EI_NIDENT; ix++)
{
printf("%02x", e_ident[ix]);
if (ix == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * print_class - A function that prints the class of ELF header
 * @e_ident: pointer to the array which contains ELF magic num
*/
void print_data(unsigned char *e_ident)
{
printf(" Class: ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}
}
