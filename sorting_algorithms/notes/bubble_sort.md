## Bubble Sort

* I just needed to understand this properly.

* Bubble Sort is a simple sorting algorithm that repeatedly steps through the list to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which means the list is sorted.

- To explain further:

1. `bubble_sort` is a function that takes two parameters: an array of integers (`array`) and the size of the array (`size`).

2. I used two nested loops. The outer loop (`for (i = 0; i < size - 1; i++)`) controls the number of passes through the array. The loop goes from 0 to `size - 2` because after each pass, the largest element "bubbles" to the end, so we don't need to compare it again in subsequent passes.

3. Inside the outer loop, there is a variable `swapped` initialized to 0. This variable will be used to check whether any swaps were made during the inner loop, which helps to determine if the array is already sorted.

4. The inner loop (`for (j = 0; j < size - 1 - i; j++)`) compares adjacent elements in the array and swaps them if they are out of order.

	- `array[j]` is compared with `array[j + 1]`. If `array[j]` is greater than `array[j + 1]`, it means they are in the wrong order, and a swap is needed.

	- If a swap is performed, the swapped variable is set to 1 to indicate that a swap was made.

	- After each swap, the print_array function is called to display the current state of the array. This is often done to visualize the sorting process.

5. After the inner loop completes, there's a check to see if any swaps were made during that pass (if (!swapped)). If no swaps were made in a pass, it means the array is already sorted, and the function breaks out of the outer loop early.

6. The process continues for each pass, with the largest element moving to its correct position in the last position of the array.

7. Once the outer loop completes (i.e., i reaches `size - 1` or the array is already sorted), the array is fully sorted in ascending order.

- [Further Explanation](https://en.wikipedia.org/wiki/Bubble_sort)
