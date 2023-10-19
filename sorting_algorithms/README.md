# Project: 0x1B. C - Sorting algorithms & Big O

## Resources

#### Read or watch:

* [Sorting algorithm](https://en.wikipedia.org/wiki/Sorting_algorithm)
* [Big O notation](https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation)
* [Sorting algorithms animations](https://www.toptal.com/developers/sorting-algorithms)
* [15 sorting algorithms in 6 minutes](https://www.youtube.com/watch?v=kPRA0W1kECg) <em>(**WARNING**: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)</em>
* [CS50 Algorithms explanation in detail by David Malan](https://www.youtube.com/watch?v=yb0PY3LX2x8&t=2s)
* [All about sorting algorithms](https://www.geeksforgeeks.org/sorting-algorithms/)
## Learning Objectives

### General

* At least four different sorting algorithms
* What is the Big O notation, and how to evaluate the time complexity of an algorithm
* How to select the best sorting algorithm for a given input
* What is a stable sorting algorithm

## More Info

### Data Structure and Functions:
* For this project you are given the following `print_array`, and `print_list` functions:
	```sh
	#include <stdlib.h>
	#include <stdio.h>

	/**
	* print_array - Prints an array of integers
	*
	* @array: The array to be printed
	* @size: Number of elements in @array
	*/
	void print_array(const int *array, size_t size)
	{
		size_t i;

		i = 0;
		while (array && i < size)
		{
			if (i > 0)
				printf(", ");
			printf("%d", array[i]);
			++i;
		}
		printf("\n");
	}
	```
	```sh
	#include <stdio.h>
	#include "sort.h"

	/**
	* print_list - Prints a list of integers
	*
	* @list: The list to be printed
	*/
	void print_list(const listint_t *list)
	{
		int i;

		i = 0;
		while (list)
		{
			if (i > 0)
				printf(", ");
			printf("%d", list->n);
			++i;
			list = list->next;
		}
		printf("\n");
	}
	```

	- Our files `print_array.c` and `print_list.c` (containing the `print_array` and `print_list` functions) will be compiled with your functions during the correction.
	- Please declare the prototype of the functions `print_array` and `print_list` in your `sort.h` header file
	- Please use the following data structure for doubly linked list:
	```sh
	/**
	* struct listint_s - Doubly linked list node
	*
	* @n: Integer stored in the node
	* @prev: Pointer to the previous element of the list
	* @next: Pointer to the next element of the list
	*/
	typedef struct listint_s
	{
		const int n;
		struct listint_s *prev;
		struct listint_s *next;
	} listint_t;
	```

* Please, note this format is used for Quiz and Task questions.

	- `O(1)`
	- `O(n)`
	- `O(n!)`
	- n square -> `O(n^2)`
	- log(n) -> `O(log(n))`
	- n * log(n) -> `O(nlog(n))`
	- n + k -> `O(n+k)`
	- …
- Please use the “short” notation (don’t use constants). Example: `O(nk)` or `O(wn)` should be written `O(n)`. If an answer is required within a file, all your answers files must have a newline at the end.

### Tests
* Here is a quick tip to help you test your sorting algorithms with big sets of random integers: [Random.org](https://www.random.org/integer-sets/)


## Description of what each files show (Tasks):
* main	--- folder that will hold the `main.c` files used as test cases for functions we'd be creating.
* sort.h	--- header file that contains all function prototypes and data structures.
* notes	--- markdown that contains thoughts and frustrations to better help me understand the algorithms.
* Files that start with:

0. [Bubble Sort](./0-bubble_sort.c) :
- Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://en.wikipedia.org/wiki/Bubble_sort) algorithm.
	- Prototype: `void bubble_sort(int *array, size_t size);`
	- You’re expected to print the array after each time you swap two elements (See example below)
- Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:
	- in the best case
	- in the average case
	- in the worst case
	```sh
	kazzywiz@Kazzywiz:~/alx-low_level_programming/sorting_algorithms$ gcc -Wall -Wextra -Werror -pedantic  -std=gnu89 0-bubble_sort.c 0-main.c print_array.c -o bubble
	kazzywiz@Kazzywiz:~/alx-low_level_programming/sorting_algorithms$ ./bubble
	19, 48, 99, 71, 13, 52, 96, 73, 86, 7

	19, 48, 71, 99, 13, 52, 96, 73, 86, 7
	19, 48, 71, 13, 99, 52, 96, 73, 86, 7
	19, 48, 71, 13, 52, 99, 96, 73, 86, 7
	19, 48, 71, 13, 52, 96, 99, 73, 86, 7
	19, 48, 71, 13, 52, 96, 73, 99, 86, 7
	19, 48, 71, 13, 52, 96, 73, 86, 99, 7
	19, 48, 71, 13, 52, 96, 73, 86, 7, 99
	19, 48, 13, 71, 52, 96, 73, 86, 7, 99
	19, 48, 13, 52, 71, 96, 73, 86, 7, 99
	19, 48, 13, 52, 71, 73, 96, 86, 7, 99
	19, 48, 13, 52, 71, 73, 86, 96, 7, 99
	19, 48, 13, 52, 71, 73, 86, 7, 96, 99
	19, 13, 48, 52, 71, 73, 86, 7, 96, 99
	19, 13, 48, 52, 71, 73, 7, 86, 96, 99
	13, 19, 48, 52, 71, 73, 7, 86, 96, 99
	13, 19, 48, 52, 71, 7, 73, 86, 96, 99
	13, 19, 48, 52, 7, 71, 73, 86, 96, 99
	13, 19, 48, 7, 52, 71, 73, 86, 96, 99
	13, 19, 7, 48, 52, 71, 73, 86, 96, 99
	13, 7, 19, 48, 52, 71, 73, 86, 96, 99
	7, 13, 19, 48, 52, 71, 73, 86, 96, 99

	7, 13, 19, 48, 52, 71, 73, 86, 96, 99
	kazzywiz@Kazzywiz:~/alx-low_level_programming/sorting_algorithms$ 
	```

* Oops, wrong repository for the project.😅🤦🏽‍♂️WTF!

| Task | File |
| ---- | ---- |
| 1. Insertion sort | [SOON](./) |
| 2. Selection sort | [SOON](./) |
| 3. Quick sort | [SOON](./) |