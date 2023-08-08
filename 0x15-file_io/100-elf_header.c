#include "main.h"
#define ELF_HEADER_SIZE 64

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/* Function to print a hexadecimal value with proper formatting */
void _print_hex(uint8_t value)
{
	if (value < 16)
		_putchar('0');
	printf("%X", value);
}

/* Function to print magic numbers in hexadecimal format */
void _print_magic(const unsigned char *magic)
{
	int i;

	for (i = 0; i < 16; ++i)
	{
		_print_hex(magic[i]);
		if (i < 15)
			_putchar(' ');
	}
	_putchar('\n');
}

/* Function to display information from the ELF header */
void display_elf_info(const char *filename)
{
	/* Open the ELF file on initialization*/
	int fd = open(filename, O_RDONLY);
	/* Read the magic numbers from the ELF header */
	unsigned char magic[16];
	uint8_t class = magic[4], data = magic[5], osabi = magic[7];
	uint8_t abiversion = magic[8];
	uint16_t type;
	uint64_t entry;

	if (fd == -1)
	{
		write(STDERR_FILENO, "Error: File not found\n", 22);
		exit(98);
	}

	if (read(fd, magic, sizeof(magic)) != sizeof(magic))
	{
		write(STDERR_FILENO, "Error: Unable to read ELF header\n", 33);
		exit(98);
	}

	/* Check if the file is in ELF format */
	if (magic[0] != 0x7F || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F')
	{
		write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
		exit(98);
	}

	/* Extract information from the magic numbers */
	if (read(fd, &type, sizeof(type)) != sizeof(type))
	{
		write(STDERR_FILENO, "Error: Unable to read ELF header\n", 33);
		exit(98);
	}

	/* Read the entry point address from the ELF header */
	if (lseek(fd, 24, SEEK_SET) == -1 ||
		read(fd, &entry, sizeof(entry)) != sizeof(entry))
	{
		write(STDERR_FILENO, "Error: Unable to read ELF header\n", 33);
		exit(98);
	}

	/* Display the extracted information */
	printf("Magic: ");
	_print_magic(magic);
	printf("Class: %s\n", class == 1 ? "32-bit" : "64-bit");
	printf("Data: %s\n", data == 1 ? "Little-endian" : "Big-endian");
	printf("Version: %u\n", magic[6]);
	printf("OS/ABI: %u\n", osabi);
	printf("ABI Version: %u\n", abiversion);
	printf("Type: %u\n", type);
	printf("Entry point address: 0x%016lX\n", entry);

	close(fd); /* close the file */
}

/**
 * custom_strlen - calculate length of NULL terminated string
 * @str: string
 *
 * Return: length
 */

size_t custom_strlen(const char *str)
{
	size_t len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	const char *elf_filename = argv[1];

	/* Check for correct number of command-line arguments */
	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: ", 7);
		write(STDERR_FILENO, argv[0], custom_strlen(argv[0]));
		write(STDERR_FILENO, " elf_filename\n", 15);
		exit(98);
	}

	/* Get ELF filename from command-line argument */
	display_elf_info(elf_filename);

	return (0);
}
