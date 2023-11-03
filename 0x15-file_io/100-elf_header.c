#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void check_elf(unsigned char *idnt);
void print_magic(unsigned char *idnt);
void print_class(unsigned char *idnt);
void print_data(unsigned char *idnt);
void print_version(unsigned char *idnt);
void print_abi(unsigned char *idnt);
void print_osabi(unsigned char *idnt);
void print_type(unsigned int type, unsigned char *idnt);
void print_entry(unsigned long int entry, unsigned char *idnt);
void close_elf(int elf);

/**
 * print_magic - magic numbers
 *
 * @idnt: Data type
 */

void print_magic(unsigned char *idnt)
{
	int idx = 0;

	printf("  Magic:   ");
	while (idx < EI_NIDENT)
	{
		printf("%02x", idnt[idx]);
		if (idx == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
		idx++;
	}
}

/**
 * check_elf - Checks for ELF file.
 *
 * @idnt: Data type
 */

void check_elf(unsigned char *idnt)
{
	int idx = 0;

	while (idx < 4)
	{
		if (idnt[idx] != 'E' &&
			idnt[idx] != 'L' &&
			idnt[idx] != 'F' &&
			idnt[idx] != 127)
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
		idx++;
	}
}

/**
 * print_class - class of ELF header
 *
 * @idnt: Data type
 */

void print_class(unsigned char *idnt)
{
	printf("  Class:                             ");
	if (idnt[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (idnt[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (idnt[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>n", idnt[EI_CLASS]);
	}
}

/**
 * print_data - Data of ELF
 *
 * @idnt: Data type
 */

void print_data(unsigned char *idnt)
{
	printf("  Data:                              ");
	if (idnt[EI_DATA] == ELFDATANONE)
	{
		printf("none\n");
	}
	else if (idnt[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
	}
	else if (idnt[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
	}
	else
	{
		printf("<unknown: %x>\n", idnt[EI_DATA]);
	}
}

/**
 * print_osabi - OS/ABI of EFI
 *
 * @idnt: Data type
 */

void print_osabi(unsigned char *idnt)
{
	printf("  OS/ABI:                            ");
	if (idnt[EI_OSABI] == ELFOSABI_NONE)
	{
		printf("UNIX - System V\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_HPUX)
	{
		printf("UNIX - HP-UX V\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_NETBSD)
	{
		printf("UNIX - NetBSD\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_SOLARIS)
	{
		printf("UNIX - Solaris\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_LINUX)
	{
		printf("UNIX - Linux\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_TRU64)
	{
		printf("UNIX - TRU64\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_IRIX)
	{
		printf("UNIX - IRIX\n");
	}
	else if (idnt[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (idnt[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (idnt[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", idnt[EI_OSABI]);
}

/**
 * print_version - Print EFI version
 *
 * @idnt: Data type
 */

void print_version(unsigned char *idnt)
{
	printf("  Version:                           %d", idnt[EI_VERSION]);
	if (idnt[EI_VERSION] == EV_CURRENT)
	{
		printf("(current)\n");
	}
	else
	{
		printf("\n");
	}
}

/**
 * print_abi - ABI of ELF
 *
 * @idnt: Data type
 */

void print_abi(unsigned char *idnt)
{
	printf("  ABI Version:                       %d\n", idnt[EI_ABIVERSION]);
}

/**
 * print_type - type of EFI
 *
 * @type: Data type
 *
 * @idnt: Data type
 */

void print_type(unsigned int type, unsigned char *idnt)
{
	if (idnt[EI_DATA] == ELFDATA2MSB)
	{
		type >>= 8;
	}
	printf("  Type:                              ");
	if (type == ET_NONE)
	{
		printf("NONE (None)\n");
	}
	else if (type == ET_REL)
	{
		printf("REL (Relocatable file)\n");
	}
	else if (type == ET_EXEC)
	{
		printf("EXEC (Executable file)\n");
	}
	else if (type == ET_CORE)
	{
		printf("CORE (Core file)\n");
	}
	else if (type == ET_DYN)
	{
		printf("DYN (Shared object file)\n");
	}
	else
	{
		printf("<unknown: %x>\n", type);
	}
}

/**
 * print_entry - entry point
 *
 * @entry: Data type
 *
 * @idnt: Data type
 */

void print_entry(unsigned long int entry, unsigned char *idnt)
{
	printf("  Entry point address:               ");
	if (idnt[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) | ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}
	if (idnt[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)entry);
	}
	else
	{
		printf("%#lx\n", entry);
	}
}

/**
 * close_elf - Closes ELF
 *
 * @elf: Data type
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - info
 *
 * @argc: Data type
 *
 * @argv: Data type
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int opn, rd;

	opn = open(argv[1], O_RDONLY);
	if (opn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	rd = read(opn, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(opn);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(opn);
	return (0);
}
