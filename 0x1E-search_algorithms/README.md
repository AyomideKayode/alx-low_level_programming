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
- n\*m -> `O(nm)`
- n square -> `O(n^2)`
- sqrt n -> `O(sqrt(n))`
- log(n) -> `O(log(n))`
- n \* log(n) -> `O(nlog(n))`
- …

## Description of what each file shows (Tasks)

- search_algos.h ----------- holds files' function prototypes.
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

```sh
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ ./0-linear
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$
```

1. [Binary Search](./1-binary.c) :

Write a function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://en.wikipedia.org/wiki/Binary_search_algorithm)

- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the index where `value` is located
- You can assume that `array` will be sorted in ascending order
- You can assume that `value` won’t appear more than once in `array`
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray) (See example)

```sh
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ ./1-binary
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$
```

2. [Big O #0](./2-O) :

What is the `time complexity` (worst case) of a linear search in an array of size `n`?

3. [Big O #1](./3-O) :

What is the `space complexity` (worst case) of an iterative linear search algorithm in an array of size `n`?

4. [Big O #2](./4-O) :

What is the `time complexity` (worst case) of a binary search in an array of size `n`?

5. [Big O #3](./5-O) :

What is the `space complexity` (worst case) of a binary search in an array of size `n`?

6. [Big O #4](./6-O) :

What is the space complexity of this function / algorithm?

```c
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

7. [Jump Search](./100-jump.c) :

Write a function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://en.wikipedia.org/wiki/Jump_search)

- Prototype : `int jump_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use the square root of the size of the array as the jump step.
- You can use the `sqrt()` function included in `<math.h>` (don’t forget to compile with -lm)
- Every time you compare a value in the array to the value you are searching for, you have to print this value (see example)

```sh
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ ./100-jump 
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Value checked array[9] = [9]
Found 999 at index: -1
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ 
```

8. [Big O #5](./101-O) :

What is the `time complexit`y (average case) of a jump search in an array of size `n`, using `step = sqrt(n)`?

9. [Interpolation search](./102-interpolation.c)

Write a function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://en.wikipedia.org/wiki/Interpolation_search)

- Prototype : `int interpolation_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- To determine the probe position, you can use : `size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))`
- Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

```sh
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ ./102-interpolation 
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[14] is out of range
Found 999 at index: -1
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ 
```

10. [Exponential search](./103-exponential.c) :

Write a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://en.wikipedia.org/wiki/Exponential_search)

- Prototype : `int exponential_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in `array`
- And `value` is the value to search for
- Your function must return the first index where `value` is located
- You can assume that `array` will be sorted in ascending order
- If `value` is not present in `array` or if `array` is `NULL`, your function must return `-1`
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
- Once you’ve found the good range, you need to use a binary search:
  - Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)

```sh
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ ./103-exponential 
Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Found 62 at index: 13

Value checked array[1] = [1]
Value checked array[2] = [2]
Value found between indexes [2] and [4]
Searching in array: 2, 3, 4
Found 3 at index: 3

Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Searching in array: 76, 99
Searching in array: 99
Found 999 at index: -1
ayomide@Kazzywiz:~/alx-low_level_programming/0x1E-search_algorithms$ 
```

---

### Environment

- Language: C
  - OS: Ubuntu 20.04 LTS
  - Compiler: gcc 4.8.4
  - Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

## Author

- Website - [Ayomide Kayode](https://github.com/AyomideKayode)
- ALX SOFTWARE ENGINEERING PROGRAM - [ALX_AFRICA](https://www.alxafrica.com/programmes/)
- Twitter - [@kazzy_wiz](https://www.twitter.com/kazzy_wiz)
