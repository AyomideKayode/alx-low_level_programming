# Project: 0x1E. C - Search Algorithms

## Resources

### Read or watch :-

- [Search algorithm](https://en.wikipedia.org/wiki/Search_algorithm)
- [Space complexity (1)](https://www.geeksforgeeks.org/g-fact-86/)

## Learning Objectives

### General

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs

### More Info

You will be asked to write files containing big O notations. Please use this format:

- `O(1)`
- `O(n)`
- `O(n!)`
- n*m -> `O(nm)`
- n square -> `O(n^2)`
- sqrt n -> `O(sqrt(n))`
- log(n) -> `O(log(n))`
- n * log(n) -> `O(nlog(n))`
- …

## Description of what each file shows (Tasks)

- main :- folder that holds all `main.c` files used in compiling files created by students


0. [Linear search](./0-linear.c) :

Write a function that searches for a value in an array of integers using the [Linear search algorithm](https://en.wikipedia.org/wiki/Linear_search)

- Prototype : `int linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)


| Task             | File                       |
| ---------------- | -------------------------- |
|  |
| 1. Binary search | [1-binary.c](./1-binary.c) |
| 2. Big O #0      | [2-O](./2-O)               |
| 3. Big O #1      | [3-O](./3-O)               |
| 4. Big O #2      | [4-O](./4-O)               |
| 5. Big O #3      | [5-O](./5-O)               |
| 6. Big O #4      | [6-O](./6-O)               |
