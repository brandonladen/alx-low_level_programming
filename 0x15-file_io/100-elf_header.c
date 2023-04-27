#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check(unsigned char *ident);
void print_magic(unsigned char *ident);
void print_class(unsigned char *ident);
void print_data(unsigned char *ident);
void print_version(unsigned char *ident);
void print_abi(unsigned char *ident);
void print_osabi(unsigned char *ident);
void print_type(unsigned int type, unsigned char *ident);
void print_entry(unsigned long int entry, unsigned char *ident);
void close_elf(int elf);

/**
 * check - A function that checks if a file is an ELF file.
 * @ident: A pointer to an array
 * Return: void
 */
void check(unsigned char *ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (ident[i] != 127 && ident[i] != 'E' && ident[i] != 'L' && ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - A function that prints the magic numbers of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_magic(unsigned char *ident)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - A function that prints the class of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_class(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_data - A function that prints the data of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_data(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * print_version - A function that prints the version of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_version(unsigned char *ident)
{
	printf("  Version:                           %d",
	       ident[EI_VERSION]);

	switch (ident[EI_VERSION])
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
 * print_osabi - A function that prints the OS/ABI of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_osabi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
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
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * print_abi - A function that prints the ABI version of an ELF header.
 * @ident: A pointer to an array
 * Return: void
 */
void print_abi(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
	       ident[EI_ABIVERSION]);
}

/**
 * print_type - A function that prints type of ELF header.
 * @type: The type of ELF
 * @ident: A pointer to an array
 * Return: void
 */
void print_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

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
 * print_entry - This function prints the entry point of the ELF header.
 * @entry: An argument for entry
 * @ident: A pointer to an array
 */
void print_entry(unsigned long int entry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			  ((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}

/**
 * close_elf - Closes the file.
 * @c-elf: This is a file descriptor for the ELF file.
 * Return: void
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Checks the code
 * @argc: A pointer to the number of arguments supplied to the program.
 * @argv: A pointer to an array of pointers to the arguments.
 *
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	Elf64_Ehdr *head;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	y = read(x, head, sizeof(Elf64_Ehdr));
	if (y == -1)
	{
		free(head);
		close_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check(head->e_ident);
	printf("ELF Header:\n");
	print_magic(head->e_ident);
	print_class(head->e_ident);
	print_data(head->e_ident);
	print_version(head->e_ident);
	print_osabi(head->e_ident);
	print_abi(head->e_ident);
	print_type(head->e_type, head->e_ident);
	print_entry(head->e_entry, head->e_ident);

	free(head);
	close_elf(x);
	return (0);
}
