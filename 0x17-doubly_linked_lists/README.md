# Project: 0x17. C - Doubly linked lists

## Resources

#### Read or watch:

* [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)

### General

* What is a doubly linked list
* How to use doubly linked lists
* Start to look for the right source of information without too much help

### More Info
* Please use this data structure for this project:
	```sh
	/**
	* struct dlistint_s - doubly linked list
	* @n: integer
	* @prev: points to the previous node
	* @next: points to the next node
	*
	* Description: doubly linked list node structure
	* 
	*/
	typedef struct dlistint_s
	{
		int n;
		struct dlistint_s *prev;
		struct dlistint_s *next;
	} dlistint_t;
	```
## Description of what each file shows(Tasks):

* main --- folder holds test files that showcase examples of how to use functions.
* lists.h --- holds files' function prototypes.

* Files that start with:
0. [Print list](./0-print_dlistint.c) : Write a function that prints all the elements of a dlistint_t list.
	- Prototype: `size_t print_dlistint(const dlistint_t *h);`
	- Return: the number of nodes
	- Format: see main file
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
	julien@ubuntu:~/0x17. Doubly linked lists$ ./a 
	9
	8
	-> 2 elements
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
1. [List length](./1-dlistint_len.c) : Write a function that returns the number of elements in a linked dlistint_t list.
	- Prototype: `size_t dlistint_len(const dlistint_t *h);`
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
	julien@ubuntu:~/0x17. Doubly linked lists$ ./b 
	-> 2 elements
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
2. [Add node](./2-add_dnodeint.c) : Write a function that adds a new node at the beginning of a `dlistint_t` list.
	- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ ./c 
	1024
	402
	98
	4
	3
	2
	1
	0
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
3. [Add node at the end](./3-add_dnodeint_end.c) : Write a function that adds a new node at the end of a `dlistint_t` list.
	- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
	- Return: the address of the new element, or `NULL` if it failed
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
	julien@ubuntu:~/0x17. Doubly linked lists$ ./d 
	0
	1
	2
	3
	4
	98
	402
	1024
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
4. [Free list](./4-free_dlistint.c) : Write a function that frees a `dlistint_t` list.
	- Prototype: `void free_dlistint(dlistint_t *head);`
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
	julien@ubuntu:~/0x17. Doubly linked lists$ valgrind ./e 
	==4197== Memcheck, a memory error detector
	==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
	==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
	==4197== Command: ./e
	==4197== 
	0
	1
	2
	3
	4
	98
	402
	1024
	==4197== 
	==4197== HEAP SUMMARY:
	==4197==     in use at exit: 0 bytes in 0 blocks
	==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
	==4197== 
	==4197== All heap blocks were freed -- no leaks are possible
	==4197== 
	==4197== For counts of detected and suppressed errors, rerun with: -v
	==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
5. [Get node at index](./5-get_dnodeint.c) : Write a function that returns the nth node of a `dlistint_t` linked list.
	- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
	- where `index` is the index of the node, starting from `0`
	- if the node does not exist, return `NULL`
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
	julien@ubuntu:~/0x17. Doubly linked lists$ ./h
	0
	1
	2
	3
	4
	98
	402
	1024
	98
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
6. [Sum list](./6-sum_dlistint.c) : Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.
	- Prototype: `int sum_dlistint(dlistint_t *head);`
	- if the list is empty, return 0
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
	julien@ubuntu:~/0x17. Doubly linked lists$ ./i 
	sum = 1534
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
7. [Insert at index](./7-insert_dnodeint.c) : Write a function that inserts a new node at a given position.
	- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
	- where `idx` is the index of the list where the new node should be added. Index starts at `0`
	- Returns: the address of the new node, or `NULL` if it failed
	- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`
	- Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
	julien@ubuntu:~/0x17. Doubly linked lists$ ./j 
	0
	1
	2
	3
	4
	98
	402
	1024
	-----------------
	0
	1
	2
	3
	4
	4096
	98
	402
	1024
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
8. [Delete at index](./8-delete_dnodeint.c) : Write a function that deletes the node at index index of a `dlistint_t` linked list.
	- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
	- where `index` is the index of the node that should be deleted. Index starts at `0`
	- Returns: `1` if it succeeded, `-1` if it failed
	```sh
	julien@ubuntu:~/0x17. Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
	julien@ubuntu:~/0x17. Doubly linked lists$ ./k
	0
	1
	2
	3
	4
	98
	402
	1024
	-----------------
	0
	1
	2
	3
	4
	402
	1024
	-----------------
	1
	2
	3
	4
	402
	1024
	-----------------
	2
	3
	4
	402
	1024
	-----------------
	3
	4
	402
	1024
	-----------------
	4
	402
	1024
	-----------------
	402
	1024
	-----------------
	1024
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	-----------------
	julien@ubuntu:~/0x17. Doubly linked lists$ 
	```
9. [Crackme4](./100-password) : Find the password for [crackme4](https://github.com/alx-tools/0x17.c).
	- Save the password in the file `100-password`
	- Your file should contain the exact password, no new line, no extra space
	- Hint: The program prints “OK” when the password is correct
	-  Helpful resource: [Solve Crackme4](https://marouaalaya.medium.com/heres-how-to-find-the-password-for-crackme4-60740950a59e)
		- Download the crackme4 file from the github repo.
		- Move it into the current working directory where we need it.
		- Rename the file to have a `.pyc` extension.
		- After that, install a decompiler using: `pip3 install uncompyle6`
		- Then we run the decompiler with the file we renamed:
		```sh
		kazzywiz@Kazzywiz:~/alx-low_level_programming/0x17-doubly_linked_lists$ uncompyle6 crackme4.pyc
		# uncompyle6 version 3.9.0
		# Python bytecode version base 3.4 (3310)
		# Decompiled from: Python 3.6.9 (default, Mar 10 2023, 16:46:00)
		# [GCC 8.4.0]
		# Embedded file name: 100-crackme.py
		# Compiled at: 2017-01-06 01:44:37
		# Size of source mod 2**32: 195 bytes
		pwd = input('Password: ')
		ok = 'Zen of Python'
		ok = ok + ' C'
		ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
		if pwd == ok:
			print('OK')
		else:
			print('KO')
		# okay decompiling crackme4.pyc
		kazzywiz@Kazzywiz:~/alx-low_level_programming/0x17-doubly_linked_lists$
		```
		- From the above, we can run the readable python code from our python console to get the password :
		```sh
		kazzywiz@Kazzywiz:~/alx-low_level_programming/0x17-doubly_linked_lists$ python3
		Python 3.6.9 (default, Mar 10 2023, 16:46:00)
		[GCC 8.4.0] on linux
		Type "help", "copyright", "credits" or "license" for more information.
		>>> ok = 'Zen of Python'
		>>> ok = ok + ' C'
		>>> ok = ok[1:3] + ok[3] + ok[14] + ok[3] + ok[7:9] + ok[:6][::-1]
		>>> print(ok)
		en C Pyfo neZ
		>>>
		```
10. [Palindromes](./102-result) : 
* A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009` = `91` × `99`.
	- Find the largest palindrome made from the product of two 3-digit numbers.
	- Save the result in the file `102-result`
	- Your file should contain the exact result, no new line, no extra space
11. [crackme5](./103-keygen.c) : Write a keygen for [crackme5](https://github.com/alx-tools/0x17.c).
	- Usage of the crackme: `./crackme5 username key`
	- The crackme will segfault if you do not enter the correct key for the user
	- Usage for your keygen: `./keygen5 username`
	- Your keygen should print a valid key for the `username`
	```sh
	julien@ubuntu:~/0x17$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
	julien@ubuntu:~/0x17$ ./crackme5 julien javascript
	Segmentation fault (core dumped)
	julien@ubuntu:~/0x17$ ./crackme5 julien `./keygen5 julien`
	Congrats!
	julien@ubuntu:~/0x17$ 
	```
---
### Environment
* Language: C
	* OS: Ubuntu 14.04 LTS
	* Compiler: gcc 4.8.4 (gcc -Wall -pedantic -Werror -Wextra -std=gnu89 *.c -o name_of_executable)
	* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

---
## Author

- <em>Website</em> - [Ayomide Kayode](https://github.com/AyomideKayode)
- <em>ALX Software Engineering Program</em> - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- <em>Twitter</em> - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)