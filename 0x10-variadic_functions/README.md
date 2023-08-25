## Variadic Functions in C.
> Each file in this repository holds code that illustrates an essential concept of programming,
> specific to the C programming language:
- What are variadic functions?
- How to use `va_start`, `va_arg` and `va_end` macros
- Why and how to use the `const` type qualifier

### Description of what each file shows:

* variadic_functions.h --- holds files' function prototypes and struct
* main --- directory(folder) containing all main.c files.
* main.c files ----- holds test files that showcase examples of how to use functions

* Files that start with:
0. a function that returns the sum of all its parameters.
	- If `n == 0`, return `0`.
1. a function that prints numbers, followed by a new line.
	- where `separator` is the string to be printed between numbers
	- and `n` is the number of integers passed to the function
	- You are allowed to use `printf`
	- If `separator` is `NULL`, don’t print it
	- Print a new line at the end of your function
2. a function that prints strings, followed by a new line.
	- where `separator` is the string to be printed between the strings
	- and `n` is the number of strings passed to the function
	- You are allowed to use `printf`
	- If separator is NULL, don’t print it
	- If one of the string is NULL, print `(nil)` instead
	- Print a new line at the end of your function
3. a function that prints anything: char, int, float, string.
	- where format is a list of types of arguments passed to the function
		- `c`: `char`
		- `i`: `integer`
		- `f`: `float`
		- `s`: `char *` if the string is NULL, print `(nil)` instead
		- any other char should be ignored
	- You are not allowed to use for, goto, ternary operator, else, do ... while
	- You can use a maximum of
		- 2 `while` loops
		- 2 `if`
	- You can declare a maximum of `9` variables
	- You are allowed to use `printf`
	- Print a new line at the end of your function


### Environment
* Language: C
	* OS: Ubuntu 14.04 LTS
	* Compiler: gcc 4.8.4
	* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Author

- Website - [Ayomide Kayode](https://github.com/AyomideKayode)
- ALX SOFTWARE ENGINEERING PROGRAM - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- Twitter - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)
