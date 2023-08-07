#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output.
 * @filename: file to read from.
 * @letters: number of letters to read and print.
 * Return: number of letters read and printed, or 0 if error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file descriptor */
	ssize_t nb_read, nb_wrote;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* malloc buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* reads number of bytes from the file into the buffer */	
	nb_read = read(fd, buffer, letters);
	if (nb_read == -1) /* if number of bytes read is -1, error occured. Close*/
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write the content of the buffer to the standard output file */
	nb_wrote = write(STDOUT_FILENO, buffer, nb_read);
	if (nb_wrote == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (nb_read);

}
