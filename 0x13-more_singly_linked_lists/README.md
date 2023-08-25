## Singly Linked Lists.

> Each file in this repository holds code that illustrates an essential concept of programming,
> specific to the C programming language:
> how to build, use, and free singly linked lists

### Description of what each file shows:

* lists.h ----------- holds files' function prototypes and a sample struct linked list.
* main --- directory(folder) containing all main.c files.
* main.c files ----- holds test files that showcase examples of how to use functions

* Files that start with:
0. a function that prints all the elements of a `listint_t` list.
1. a function that returns the number of elements in a linked `listint_t` list.
2. a function that adds a new node at the beginning of a `listint_t` list.
3. a function that adds a new node at the end of a `listint_t` list.
4. a function that free a `listint_t` list.
5. a function that free a `listint_t` list.
	- The function sets the `head` to `null`.
6. a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
	- If the linked list is empty return `0`.
7. a function that returns the nth node of a `listint_t` linked list.
	- where `index` is the index of the node, starting at `0`.
	- if the node does not exist, return `NULL`.
8. a function that returns the sum of all the data (n) of a `listint_t` linked list.
	- if the list is empty, return `0`.
9. a function that inserts a new node at a given position.
	- where `idx` is the index of the list where the new node should be added. Index starts at `0`.
	- Returns: the address of the new node, or `NULL` if it failed.
	- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`.
10. a function that deletes the node at index index of a `listint_t` linked list.
	- where `index` is the index of the node that should be deleted. Index starts at `0`.
	- Returns: `1` if it succeeded, `-1` if it failed.
11.  a function that reverses a `listint_t` linked list.
	- Returns: a pointer to the first node of the reversed list.
	- You are not allowed to use more than `1` loop.
	- You are not allowed to use `malloc`, `free` or arrays.
	- You can only declare a maximum of two variables in your function.
12. a function that prints a `listint_t` linked list.
	- Returns: the number of nodes in the list.
	- This function can print lists with a loop.
	- You should go through the list only once.
	- If the function fails, exit the program with status `98`.
13. a function that frees a `listint_t` list.
	- This function can free lists with a loop.
	- You should go though the list only once.
	- Returns: the size of the list that was free'd.
	- The function sets the `head` to `NULL`.
	14. a function that finds the loop in a linked list.
	- Returns: The address of the node where the loop starts, or `NULL` if there is no loop.
	- You are not allowed to use `malloc`, `free` or arrays.
	- You can only declare a maximum of two variables in your function.


### Environment
* Language: C
	* OS: Ubuntu 14.04 LTS
	* Compiler: gcc 4.8.4
	* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Author

- Website - [Ayomide Kayode](https://github.com/AyomideKayode)
- ALX SOFTWARE ENGINEERING PROGRAM - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- Twitter - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)
