# Project: 0x1C. C - Makefiles

[![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&weight=800&size=30&pause=1000&color=F7132C&width=435&lines=Makefiles)](https://git.io/typing-svg)

## Resources

#### Read or watch:

- [Makefile](https://www3.nd.edu/~zxu2/acms60212-40212/Makefile.pdf)
- [Installing the make utility](https://www.geeksforgeeks.org/how-to-install-make-on-ubuntu/)
- [make-official documentation](https://www.gnu.org/software/make/manual/html_node/)

## Learning Objectives

### General

- What are <code>make</code>, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them

## Description of what each file shows (Tasks):

- Files that start with:

0. [make -f 0-Makefile](./0-Makefile) : Create your first Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: none

  ```sh
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 0-Makefile

  gcc main.c school.c -o school
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ ls
  0-Makefile  README.md  m.h  main.c  school  school.c
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ ./school
  j#0000000000000000000000000000000000000
  j#000000000000000000@Q**g00000000000000
  j#0000000000000000*]++]4000000000000000
  j#000000000000000k]++]++*N#000000000000
  j#0000000000000*C+++]++]++]J*0000000000
  j#00000000000@+]++qwwwp=]++++]*00000000
  j#0000000000*+++]q#0000k+]+]++]4#000000
  j#00000000*C+]+]w#0000*]+++]+]++0000000
  j#0000we+]wW000***C++]++]+]++++40000000
  j#000000000*C+]+]]+]++]++]++]+q#0000000
  j#0000000*]+]+++++++]++]+++]+++J0000000
  j#000000C++]=]+]+]+]++]++]+]+]+]=000000
  j#00000k+]++]+++]+]++qwW0000000AgW00000
  j#00000k++]++]+]+++qW#00000000000000000
  j#00000A]++]++]++]++J**0000000000000000
  j#000000e]++]+++]++]++]J000000000000000
  j#0000000A]++]+]++]++]++000000000000000
  j#000000000w]++]+]++]+qW#00000000000000
  j#00000000000w]++++]*0##000000000000000
  j#0000000000000Ag]+]++*0000000000000000
  j#00000000000000000we]+]Q00000000000000
  j#0000000000000@@+wgdA]+J00000000000000
  j#0000000000000k?qwgdC=]4#0000000000000
  j#00000000000000w]+]++qw#00000000000000
  "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$
  ```

1. [make -f 1-Makefile](./1-Makefile) :

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: `CC`, `SRC`

  - `CC`: the compiler to be used
  - `SRC`: the .c files

  ```sh
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 1-Makefile
  gcc main.c school.c -o school
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$
  ```

2. [make -f 2-Makefile](./2-Makefile) : Create your first useful Makefile.

Requirements:

- name of the executable: `school`
- rules: `all`
  - The `all` rule builds your executable
- variables: `CC`, `SRC`, `OBJ`, `NAME`
  - `CC`: the compiler to be used
  - `SRC`: the .c files
  - OBJ: the .o files
  - NAME: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the `.o` files
  ```sh
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 2-Makefile
  gcc    -c -o main.o main.c
  gcc    -c -o school.o school.c
  gcc main.o school.o -o school
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 2-Makefile
  gcc main.o school.o -o school
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ echo "/* School */" >> main.c
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 2-Makefile
  gcc    -c -o main.o main.c
  gcc main.o school.o -o school
  ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$  
  ```

3. [make -f 3-Makefile](./3-Makefile) :

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files
    ```sh
    ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make -f 3-Makefile 
	gcc    -c -o main.o main.c
	gcc    -c -o school.o school.c
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make all -f 3-Makefile
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ ls -l
	total 68
	-rw-r--r-- 1 ayomide ayomide    60 Nov 22 13:58 0-Makefile
	-rw-r--r-- 1 ayomide ayomide    75 Nov 22 13:57 1-Makefile
	-rw-r--r-- 1 ayomide ayomide   106 Nov 22 14:13 2-Makefile
	-rw-r--r-- 1 ayomide ayomide   416 Nov 22 14:16 3-Makefile
	-rw-r--r-- 1 ayomide ayomide  4982 Nov 22 14:10 README.md
	-rw-r--r-- 1 ayomide ayomide   106 Nov 22 13:40 m.h
	-rw-r--r-- 1 ayomide ayomide   140 Nov 22 14:04 main.c
	-rw-r--r-- 1 ayomide ayomide  1544 Nov 22 14:18 main.o
	-rwxr-xr-x 1 ayomide ayomide 16768 Nov 22 14:19 school
	-rw-r--r-- 1 ayomide ayomide  1441 Nov 22 13:40 school.c
	-rw-r--r-- 1 ayomide ayomide  4120 Nov 22 14:18 school.o
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make clean -f 3-Makefile 
	rm -f *~ school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make oclean -f 3-Makefile 
	rm -f main.o school.o
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make fclean -f 3-Makefile 
	rm -f *~ school
	rm -f main.o school.o
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make all -f 3-Makefile
	gcc    -c -o main.o main.c
	gcc    -c -o school.o school.c
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make all -f 3-Makefile
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make re -f 3-Makefile
	rm -f main.o school.o
	gcc    -c -o main.o main.c
	gcc    -c -o school.o school.c
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ 
    ```

4. [A complete Makefile](./4-Makefile) :

Requirements:

- name of the executable: `school`
- rules: `all`, `clean`, `oclean`, `fclean`, `re`
  - `all`: builds your executable
  - `clean`: deletes all Emacs and Vim temporary files along with the executable
  - `oclean`: deletes the object files
  - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
  - `re`: forces recompilation of all source files
- variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
  - `CC`: the compiler to be used
  - `SRC`: the `.c` files
  - `OBJ`: the `.o` files
  - `NAME`: the name of the executable
  - `RM`: the program to delete files
  - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the `.o` files
	```sh
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ make all -f 4-Makefile
	gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
	gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
	gcc main.o school.o -o school
	ayomide@Kazzywiz:~/alx-low_level_programming/0x1C-makefiles$ 
	```

5. [Island Perimeter](./5-island_perimeter.py) :

Technical interview preparation:

- You are not allowed to google anything
- Whiteboard first

Create a function `def island_perimeter(grid):` that returns the perimeter of the island described in `grid`:

- `grid` is a list of list of integers:
  - 0 represents a water zone
  - 1 represents a land zone
  - One cell is a square with side length 1
  - Grid cells are connected horizontally/vertically (not diagonally).
  - Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing).
- The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

Requirements:

- First line contains #!/usr/bin/python3
- You are not allowed to import any module
- Module and function must be documented

```sh
guillaume@ubuntu:~/0x1C$ 
guillaume@ubuntu:~/0x1C$ ./5-main.py
12
guillaume@ubuntu:~/0x1C$ 
```

---
### Environment
* Language: C 
    * OS: Ubuntu 20.04 LTS
    * Compiler: gcc; GNU Make 4.2.1
    * Style guidelines:
        - [Betty style](https://github.com/holbertonschool/Betty/wiki)

---
## Author

- **<em>Website</em>** - [Ayomide Kayode](https://github.com/AyomideKayode)
- **<em>ALX Software Engineering Program</em>** - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- **<em>Twitter</em>** - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)
