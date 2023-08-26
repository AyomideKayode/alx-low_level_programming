#include "main.h"

/**
 * display_addr - prints address
 * @ptr: Pointer.
 */
void display_addr(char *ptr)
{
	int idx;
	int start;
	char sys;

	printf("  Entry point address:               0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		start = 26;
		printf("80");
		for (idx = start; idx >= 22; idx--)
		{
			if (ptr[idx] > 0)
				printf("%x", ptr[idx]);
			else if (ptr[idx] < 0)
				printf("%x", 256 + ptr[idx]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		start = 26;
		for (idx = start; idx > 23; idx--)
		{
			if (ptr[idx] >= 0)
				printf("%02x", ptr[idx]);

			else if (ptr[idx] < 0)
				printf("%02x", 256 + ptr[idx]);

		}
	}
	printf("\n");
}

/**
 * display_type - prints type
 * @ptr: Pointer
 */
void display_type(char *ptr)
{
	char buffer = ptr[16];

	if (ptr[5] == 1)
		buffer = ptr[16];
	else
		buffer = ptr[17];

	printf("  Type:                              ");
	if (buffer == 0)
		printf("NONE (No file type)\n");
	else if (buffer == 1)
		printf("REL (Relocatable file)\n");
	else if (buffer == 2)
		printf("EXEC (Executable file)\n");
	else if (buffer == 3)
		printf("DYN (Shared object file)\n");
	else if (buffer == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", buffer);
}

/**
 * display_osabi - prints osabi
 * @ptr: Pointer
 */
void display_osabi(char *ptr)
{
	char os = ptr[7];

	printf("  OS/ABI:                            ");
	if (os == 0)
		printf("UNIX - System V\n");
	else if (os == 2)
		printf("UNIX - NetBSD\n");
	else if (os == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", os);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * display_version - prints version
 * @ptr: Pointer
 */
void display_version(char *ptr)
{
	int vers = ptr[6];

	printf("  Version:                           %d", vers);

	if (vers == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * display_data - prints data
 * @ptr: Pointer
 */
void display_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");

	if (data == 2)
		printf(", big endian\n");
}

/**
 * display_magic - prints magic info.
 * @ptr: Pointer
 */
void display_magic(char *ptr)
{
	int buf;

	printf("  Magic:  ");

	for (buf = 0; buf < 16; buf++)
		printf(" %02x", ptr[buf]);

	printf("\n");

}

/**
 * check_sys - check the version system.
 * @ptr: magic.
 * Return: no return.
 */
void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	display_magic(ptr);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	display_data(ptr);
	display_version(ptr);
	display_osabi(ptr);
	display_type(ptr);
	display_addr(ptr);
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - Displays the information contained
 * @argc: number of arguments.
 * @argv: arguments array.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(fd, 0, SEEK_SET);
	ret_read = read(fd, ptr, 27);

	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(ptr);
	close(fd);

	return (0);
}
