#include "main.h"

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
 * append_text_to_file - appends text to file, only if it exists.
 * If it doesn't, don't create.
 * @filename: name of file that text would be appended to.
 * @text_content: NULL terminated string to append to the file.
 *
 * Return: On success, returns 1. On failure or error, returns -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nb_wrote;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND); /* open if file exists */
	if (fd == -1)
		return (-1);

	/* check if there is no text_content to append */
	if (text_content == NULL)
	{
		close(fd);
		return (1); /* Success, no text appended */
	}

	nb_wrote = write(fd, text_content, custom_strlen(text_content));
	if (nb_wrote == -1)
	{
		close(fd);
		return (-1); /* Error while appending to the file */
	}

	close(fd);
	return (1);
}
