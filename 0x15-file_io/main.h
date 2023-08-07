#ifndef HEADER_H
#define HEADER_H

/* dprintf */
#include <stdio.h>
#include <string.h>

/* malloc, free */
#include <stdlib.h>

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* close */
#include <unistd.h>

/* Function Prototypes */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HEADER_H */
