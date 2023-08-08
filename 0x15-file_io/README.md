## File I/O
> Each file in this repository holds code that illustrates an essential concept of programming,
> specific to the C programming language:
> how to use system calls to open, read, write, and close files;
> how to use flags O_RDONLY, O_WRONLY, O_RDWR.

---
### Description of what each file shows:

* main --- folder holds test files that showcase examples of how to use functions.
* main.h --- holds files' function prototypes.

* Files that start with:
0. a function that reads a text file and prints it to the `POSIX` standard output.
	- where letters is the number of letters it should read and print.
	- returns the actual number of letters it could read and print,
	- if the file can not be opened or read, return `0`,
	- if `filename` is `NULL` return `0`,
	- if `write` fails or does not write the expected amount of bytes, return `0`.
1. a function that creates a file with content.
	- where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file,
	- Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, `write` “fails”, etc…)
	- The created file must have those permissions: `rw-------`. If the file already exists, do not change the permissions.
	- if the file already exists, truncate it,
	- if `filename` is `NULL` return `-1`,
	- if `text_content` is `NULL` create an empty file.
2. a function that appends a text at the end of a file.
	- where `filename` is the name of the file and `text_content` is the `NULL` terminated string to add at the end of the file,
	- Return: 1 on success and -1 on failure,
	- Do not create the file if it does not exist,
	- If `filename` is `NULL` return -1,
	- If `text_content` is `NULL`, do not add anything to the file. Return `1` if the file exists and `-1` if the file does not exist or if you do not have the required permissions to write the file.
3. a program that copies the content of a file to another file.
	- Usage: `cp file_from file_to`.
	- if the number of argument is not the correct one, exit with code `97` and print `Usage: cp file_from file_to`, followed by a new line, on the `POSIX` standard error.
	- if `file_to` already exists, truncate it.
	- if `file_from` does not exist, or if you can not read it, exit with code `98` and print `Error: Can't read from file NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
		- where `NAME_OF_THE_FILE` is the first argument passed to your program.
	- if you can not create or if `write` to `file_to` fails, exit with code `99` and print `Error: Can't write to NAME_OF_THE_FILE`, followed by a new line, on the `POSIX` standard error.
		- where `NAME_OF_THE_FILE` is the second argument passed to your program.
	- if you can not close a file descriptor , exit with code `100` and print `Error: Can't close fd FD_VALUE`, followed by a new line, on the `POSIX` standard error.
		- where `FD_VALUE` is the value of the file descriptor.
	- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions.
	- You must read `1,024` bytes at a time from the `file_from` to make less system calls. Use a buffer.
	- You are allowed to use `dprintf`.

---
### Environment
* Language: C
	* OS: Ubuntu 14.04 LTS
	* Compiler: gcc 4.8.4 (gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o name_of_executable)
	* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

---
### Authors

- Website - [Ayomide Kayode](https://github.com/AyomideKayode)
- ALX SOFTWARE ENGINEERING PROGRAM - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- Twitter - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)