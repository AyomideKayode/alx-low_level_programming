#include "main.h"

/* #define EI_NIDENT 16 */

/**
 * verify_elf - Verifies if the input is a valid ELF file.
 * @e_ident: The ELF identification array.
 *
 * Return: void.
 */

void verify_elf(unsigned char *e_ident)
{
	if (e_ident[EI_MAG0] != 0x7f || e_ident[EI_MAG1] != 'E' ||
			e_ident[EI_MAG2] != 'L' || e_ident[EI_MAG3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not valid ELF\n");
		exit(98);
	}
}

/**
 * print_magic - Prints the magic numbers of the ELF header.
 * @e_ident: The ELF identification array.
 *
 * Return: void.
 */

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the ELF class.
 * @e_ident: The ELF identification array.
 *
 * Return: void.
 */

void print_class(unsigned char *e_ident)
{
	printf("Class:                             ");

	/* determine the ELF class */
	if (e_ident[EI_CLASS] == ELFCLASSNONE)
	{
		printf("This class is invalid\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (e_ident[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
	else
	{
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * close_file - Closes the file descriptor and performs error handling.
 * @fd: The file descriptor to close.
 *
 * Return: void.
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
}


/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always 0 (Success).
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fd, r;
	Elf64_Ehdr *header;

	if (argc != 2) /* check for correct number of command-line arguments */
	{
		dprintf(STDERR_FILENO, "Usage: %s file\n", argv[0]);
		exit(1);
	}

	fd = open(argv[1], O_RDONLY); /* open the ELF file */
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr)); /* allocate memory for ELF header */
	if (header == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	r = read(fd, header, sizeof(Elf64_Ehdr)); /* read the ELF header */
	if (r < 0)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	verify_elf(header->e_ident); /* verify the ELF format */
	print_magic(header->e_ident); /* print the magic numbers */
	print_class(header->e_ident); /* print elf class*/

	/* close file and clean up */
	free(header);
	close_file(fd);

	return (0);
}
