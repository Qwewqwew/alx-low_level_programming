#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *i);
void print_magic(unsigned char *i);
void print_class(unsigned char *i);
void print_data(unsigned char *i);
void print_version(unsigned char *i);
void print_abi(unsigned char *i);
void print_osabi(unsigned char *i);
void print_type(unsigned int type, unsigned char *i);
void print_entry(unsigned long int entry, unsigned char *i);
void close_elf(int celf);

/**
 * check_elf - checks the file if it is an ELF
 * @i: pointer ti the array which contains ELF magic number
*/
void check_elf(unsigned char *i)
{
int ix;
for (ix = 0; ix < 4; ix++)
{
if (i[ix] != 127 &&
i[ix] != 'E' &&
i[ix] != 'L' &&
i[ix] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}
}

/**
 * print_magic - A function that prints the ELF magic number
 * @i: pointer to the array which contains ELF magic num
*/
void print_magic(unsigned char *i)
{
int ix;
printf(" Magic: ");
for (ix = 0; ix < EI_NIDENT; ix++)
{
printf("%02x", i[ix]);
if (ix == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}

/**
 * print_class - A function that prints the class of ELF header
 * @i: pointer to the array which contains ELF magic num
*/
void print_class(unsigned char *i)
{
printf(" Class: ");
switch (i[EI_CLASS])
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
printf("<unknown: %x>\n", i[EI_CLASS]);
}
}

/**
 * print_data - A function that prints the data of ELF header
 * @i: pointer to the array which contains ELF class
*/
void print_data(unsigned char *i)
{
printf(" Data: ");
switch (i[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n",
i[EI_CLASS]);
}
}

/**
 * print_version - A function that prints ELF header version
 * @i: pointer to the array which contains ELF version
*/
void print_version(unsigned char *i)
{
printf(" Version: %d",
i[EI_VERSION]);
switch (i[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}

/**
 * print_abi - A function that prints ELF header ABI
 * @i: pointer to the array which contains ELF ABI
*/
void print_abi(unsigned char *i)
{
printf(" ABI Version: %d\n",
i[EI_ABIVERSION]);
}

/**
 * print_osabi - A function that that prints ELF header file's
 * OS/ABI
 * @i: pointer to the array which contains ELF version
*/
void print_osabi(unsigned char *i)
{
printf(" OS/ABI: ");
switch (i[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n",
i[EI_OSABI]);
}
}

/**
 * print_type - A function that prints ELF header's type
 * @type: the type of the file
 * @i: pointer to the array which contains ELF class
*/
void print_type(unsigned int type, unsigned char *i)
{
if (i[EI_DATA] == ELFDATA2MSB)
type >>= 8;
printf(" Type: ");
switch (type)
{
case ET_NONE:
printf("NONE (None)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", type);
}
}

/**
 * print_entry - A function that prints ELF header file's entry
 * @entry: address of entry point
 * @i: pointer to the array which contains ELF class
*/
void print_entry(unsigned long int entry, unsigned char *i)
{
printf(" Entry point address: ");
if (i[EI_DATA] == ELFDATA2MSB)
{
entry = ((entry << 8) & 0xFF00FF00) |
((entry >> 8) & 0xFF00FF);
entry = (entry << 16) | (entry >> 16);
}
if (i[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)entry);
else
printf("%#lx\n", entry);
}

/**
 * close_elf - terminate ELF file
 * @celf: the file stands for ELF file
*/
void close_elf(int celf)
{
if (close(celf) == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't close fd %d\n", celf);
exit(98);
}
}
