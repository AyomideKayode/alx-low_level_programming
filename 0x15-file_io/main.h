#ifndef HEADER_H
#define HEADER_H

/* dprintf */
#include <stdio.h>

/* malloc, free */
#include <stdlib.h>

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* close */
#include <unistd.h>

/* elf header */
#include <stdint.h>
#include <elf.h>

void verify_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

/* Function Prototypes */

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HEADER_H */
