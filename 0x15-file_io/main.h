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

void display_addr(char *ptr);
void display_type(char *ptr);
void display_osabi(char *ptr);
void display_version(char *ptr);
void display_data(char *ptr);
void display_magic(char *ptr);
void check_sys(char *ptr);
int check_elf(char *ptr);

/* Function Prototypes */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* HEADER_H */
