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

2. [Let's call C functions from Python](./100-operations.so) : Create a dynamic library that contains C functions that can be called from Python. See example for more detail.
	```sh
	julien@ubuntu:~/0x18$ cat 100-tests.py
	import random
	import ctypes

	cops = ctypes.CDLL('./100-operations.so')
	a = random.randint(-111, 111)
	b = random.randint(-111, 111)
	print("{} + {} = {}".format(a, b, cops.add(a, b)))
	print("{} - {} = {}".format(a, b, cops.sub(a, b)))
	print("{} x {} = {}".format(a, b, cops.mul(a, b)))
	print("{} / {} = {}".format(a, b, cops.div(a, b)))
	print("{} % {} = {}".format(a, b, cops.mod(a, b)))
	julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 
	66 + -76 = -10
	66 - -76 = 142
	66 x -76 = -5016
	66 / -76 = 0
	66 % -76 = 66
	julien@ubuntu:~/0x18$ python3 100-tests.py 
	-34 + -57 = -91
	-34 - -57 = 23
	-34 x -57 = 1938
	-34 / -57 = 0
	-34 % -57 = -34
	julien@ubuntu:~/0x18$ python3 100-tests.py 
	-5 + -72 = -77
	-5 - -72 = 67
	-5 x -72 = 360
	-5 / -72 = 0
	-5 % -72 = -5
	julien@ubuntu:~/0x18$ python3 100-tests.py 
	39 + -62 = -23
	39 - -62 = 101
	39 x -62 = -2418
	39 / -62 = 0
	39 % -62 = 39
	julien@ubuntu:~/0x18$ 
	```
	- To do this, first I:
		- Write the C [function](./main/100-operations.c) that I want to include in the dynamic library. In this case, we're trying to create a library with functions for addition, subtraction, multiplication, division, and modulo. 
		- Then I compile the C code into a shared dynamic library `.so` using the following command:
			- `gcc -shared -o 100-operations.so -fPIC 100-operations.c` which is basically a combination of the first two lines in the shell script we wrote in the previous task.
		- Now that we have a [shared library](./100-operations.so), we can go ahead and run our [python file](./100-tests.py). This script imports the dynamic library 100-operations.so and calls the C functions from Python.
