#include <string.h>
#include <sys/mman.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * print_magic - Print first part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i <= 15; i++)
		printf("%02x%c", e_ident[i], ((i == 15) ? '\n' : ' '));
}

/**
 * print_class - Print second part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_class(unsigned char *e_ident)
{
	char *printInit = "  Class:                             ";

	printf("%s", printInit);
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32");
		break;
	case ELFCLASS64:
		printf("ELF64");
		break;
	default:
		printf("<unknown: %x>", e_ident[EI_CLASS]);
	}
	printf("\n");
}

/**
 * print_data - print theert part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_data(unsigned char *e_ident)
{

	char *printInit = "  Data:                              ";

	printf("%s", printInit);
	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("%s", "Unknown data format.");
		break;
	case ELFDATA2LSB:
		printf("%s", "2's complement, little endian");
		break;
	case ELFDATA2MSB:
		printf("%s", "2's complement, big-endian.");
		break;
	default:
		break;
	}
	printf("\n");
}

/**
 * print_vers - print fourt part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_vers(unsigned char *e_ident)
{
	char *printInit = "  Version:                           ";

	printf("%s", printInit);
	if (e_ident[EI_VERSION] == EV_NONE)
		printf("%s", "0 (invalid)");
	else
		printf("%s", "1 (current)");
	printf("\n");
}

/**
 * print_osabi - print 5 part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_osabi(unsigned char *e_ident)
{
	char *printInit = "  OS/ABI:                            ";

	printf("%s", printInit);
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("%s", "UNIX - System V");
		break;
	case ELFOSABI_HPUX:
		printf("%s", "HP-UX ABI");
		break;
	case ELFOSABI_NETBSD:
		printf("%s", "NetBSD ABI");
		break;
	case ELFOSABI_LINUX:
		printf("%s", "Linux ABI");
		break;
	case ELFOSABI_SOLARIS:
		printf("%s", "Solaris ABI");
		break;
	case ELFOSABI_IRIX:
		printf("%s", "IRIX ABI");
		break;
	case ELFOSABI_FREEBSD:
		printf("%s", "FreeBSD ABI");
		break;
	case ELFOSABI_TRU64:
		printf("%s", "TRU64 UNIX ABI");
		break;
	case ELFOSABI_ARM:
		printf("%s", "ARM architecture ABI");
		break;
	case ELFOSABI_STANDALONE:
		printf("%s", "Stand-alone (embedded) ABI");
		break;
	default:
		break;
	}
	printf("\n");
}

/**
 * print_abi - print 6 part
 * @e_ident: Pointera ELF
 * Return: Without return
 */
void print_abi(unsigned char *e_ident)
{
	char *printInit = "  ABI Version:         ";

	printf("%s              %d\n", printInit, e_ident[EI_ABIVERSION]);
}

/**
 * print_type - print 7 part
 * @e_type: Pointera ELF
 * Return: Without return
 */
void print_type(int e_type)
{
	char *printInit = "  Type:                              %s\n";

	printf("%s", printInit);
	switch (e_type)
	{
	case ET_REL:
		printf("%s", "REL (Relocatable file)");
		break;
	case ET_EXEC:
		printf("%s", "EXEC (Executable file)");
		break;
	case ET_DYN:
		printf("%s", "DYN (Shared object file)");
		break;
	case ET_CORE:
		printf("%s", "CORE (core file)");
		break;
	case ET_NONE:
		printf("%s", "NONE (Unknown Type)");
		break;
	default:
		break;
	}
}

/**
 * main - Initial function
 * @argc: count
 * @argv: arg
 * Return: 0 to success
 */
int main(int argc, char const *argv[])
{
	int file, valR;
	Elf64_Ehdr *header;
	char *printEntry = "  Entry point address:               ";

	if (argc != 2)
		exit(98);
	file = open(argv[1], O_RDONLY);
	header = malloc(sizeof(Elf64_Ehdr));
	if (file == -1 || !header)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]), exit(98);
	}
	valR = read(file, header, sizeof(Elf64_Ehdr));
	if (valR == -1)
	{
		if (close(file) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
			exit(98);
		}
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	print_magic(header->e_ident), print_class(header->e_ident);
	print_data(header->e_ident), print_vers(header->e_ident);
	print_osabi(header->e_ident), print_abi(header->e_ident);
	print_type(header->e_type);
	printf("%s%p", printEntry, (void *)(long)header->e_entry);
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(98);
	}
	free(header);
	return (0);
}
