# Project: 0x18. C - Dynamic libraries

## Resources

### Read or watch:

* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [create dynamic libraries on Linux](https://medium.com/@kenneth.ca95/how-to-create-a-dynamic-library-in-c-baa473148d00#:~:text=The%20way%20to%20create%20a,of%20.o%20files%20from%20each%20.)

### General

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable <code>$LD_LIBRARY_PATH</code> and how to use it
* What are the differences between static and shared libraries
* Basic usage <code>nm</code>, <code>ldd</code>, <code>ldconfig</code>

## Description of what each file shows(Tasks):

* main --- folder holds test files that showcase examples of how to use functions.
* main.h --- holds files' function prototypes.

* Files that start with:
0. [A library is not a luxury but one of the necessities of life](./libdynamic.so) : Create the dynamic library libdynamic.so containing all the functions listed below:
- See [Header file](./main.h)
	- To create the dynamic library with those functions; having used the same functions for when we did a previous project on Static libraries, all I did was copy all `.c` files from [0x09-static_libraries](../0x09-static_libraries/)
	- And then run the gcc command to generate object files from them (source files) using:
		- `gcc -c -fPIC *.c`
	- Next, I combine all object files together into one library using:
		- `gcc -shared -o libdynamic.so *.o`
	- To verify that it's done and we have the right funtions as dynamic symbols, we use:
		- `nm -D libdynamic.so`
	- Now, we need to compile the library with our main.c file to link it and use it as we want. For this to work, we have to add the location of our library files into the environmental variable to know where to find the functions.
		- `export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH`
	- And then we can go on to compile with:
		- `gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len`
	- See pictorial representations below:
	<img src="./main/dynamic-lib step1.PNG" alt="Dynamic Library1" style="width: 100%;">
	<img src="./main/dynamic-lib step2.PNG" alt="Dynamic Library2" style="width: 100%;">

1. [Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh) : Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.
	- Compile all `.c` files in the current directory into object files
	- Create the dynamic library `liball.so` from the object files
	- Clean up by removing the object files
	- All these is easily done by just temporarily copying all the `.c` files that we moved into the main folder back into the PWD.
	- Then we write up the shell script to solve for Task 1 and run it to know it works.
	- The `.c` files can be deleted afterwards. Since they are present in the main folder.
