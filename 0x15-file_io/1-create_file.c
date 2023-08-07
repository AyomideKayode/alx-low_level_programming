#include "main.h"

/**
 * create_file - creates a new file or truncates an existing file,
 * and writes content into it.
 * @filename: name of file to be created.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: On success, returns 1. On failure or error, returns -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nb_wrote;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1); /* Error while opening/creating file */

	/* check if there isn't text to write into the string */
	if (text_content == NULL)
	{
		close (fd);
		return (1);
	}

	/* write text into new file */
	nb_wrote = write(fd, text_content, strlen(text_content));
	if (nb_wrote == -1)
	{
		close(fd);
		return (-1); /* Error while writing to the file */
	}

	close(fd);
	return (1);
}
