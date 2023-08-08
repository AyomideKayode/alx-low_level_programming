#include "main.h"

#define usage_error 97
#define read_error 98
#define write_error 99
#define close_error 100

/**
 * errorExit - prints error message and exit with a value.
 * @errorcase: exit value to be used.
 * @filename: name of file or files.
 * @fd: file descriptor.
 *
 * Return: void (nothing).
 */

void errorExit(int errorcase, const char *filename, int fd)
{
	switch (errorcase)
	{
		case usage_error:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case read_error:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			break;
		case write_error:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			break;
		case close_error:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			break;
		default:
			break;
	}

	if (fd != 0)
		close(fd);

	exit(errorcase);
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int fd_1, fd_2, nb_read, nb_wrote;
	char buffer[1024];

	/* Check for correct number of command-line arguments */
	if (argc != 3)
		errorExit(usage_error, NULL, 0);

	/* Open destination(copy to) file for writing */
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		errorExit(write_error, argv[2], 0);

    /* Open source(copy from) file for reading */
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		errorExit(read_error, argv[1], 0);

    /* Read from source and write to destination */
	while ((nb_read = read(fd_1, buffer, sizeof(buffer))) != 0)
	{
		if (nb_read == -1)
			errorExit(read_error, argv[1], fd_1);

		nb_wrote = write(fd_2, buffer, nb_read);
		if (nb_wrote == -1)
			errorExit(write_error, argv[2], fd_2);
	}

	/* Close both files */
	if (close(fd_2) == -1)
		errorExit(close_error, NULL, fd_2);

	if (close(fd_1) == -1)
		errorExit(close_error, NULL, fd_1);

	return (0);
}
