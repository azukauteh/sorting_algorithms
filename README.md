# 0x1B. C - Sorting Algorithms & Big O

This repository contains the solutions to the "0x1B. C - Sorting Algorithms & Big O" project, which focuses on various sorting algorithms implemented in C and understanding their time complexities using Big O notation.

## Learning Objectives

- Understand the concept of sorting and its importance in programming.
- Learn and implement different sorting algorithms, such as bubble sort, insertion sort, selection sort, quicksort, and merge sort.
- Analyze the time complexities of each sorting algorithm using Big O notation.
- Compare the efficiency of different sorting algorithms for different scenarios.

## Sorting Algorithms Implemented

1. Bubble Sort: A simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. Time Complexity: O(n^2).

2. Insertion Sort: An in-place sorting algorithm that builds a sorted array one element at a time by inserting each element into its proper position. Time Complexity: O(n^2).

3. Selection Sort: An in-place sorting algorithm that repeatedly finds the minimum element from the unsorted part of the array and swaps it with the first unsorted element. Time Complexity: O(n^2).

4. Quick Sort: A divide-and-conquer sorting algorithm that selects a pivot element and partitions the array into two subarrays such that elements less than the pivot are on the left, and elements greater than the pivot are on the right. Time Complexity: Average Case: O(n*log(n)), Worst Case: O(n^2).

5. Merge Sort: A divide-and-conquer sorting algorithm that divides the array into two halves, recursively sorts them, and then merges the sorted halves. Time Complexity: O(n*log(n)).

## How to Use

1. Clone the repository to your local machine using `git clone`.

2. Navigate to the project directory.

3. Compile the C files in  Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.

4. Run the compiled executables to see the output of each sorting algorithm.

5. The `big_o` folder contains a Python script for measuring and comparing the time complexities of each sorting algorithm.

## Files and Directories

- `0-bubble_sort.c`: Bubble sort implementation.
- `0-O`: Text file containing the average case time complexity of bubble sort.
- `1-insertion_sort_list.c`: Insertion sort implementation for doubly linked lists.
- `1-O`: Text file containing the average case time complexity of insertion sort.
- `2-selection_sort.c`: Selection sort implementation.
- `2-O`: Text file containing the average case time complexity of selection sort.
- `3-quick_sort.c`: Quick sort implementation with the Lomuto partition scheme.
- `3-O`: Text file containing the average case time complexity of quick sort.
- `100-shell_sort.c`: Shell sort implementation.
- `101-cocktail_sort_list.c`: Cocktail shaker sort (bidirectional bubble sort) implementation for doubly linked lists.
- `102-counting_sort.c`: Counting sort implementation for positive integer arrays.
- `103-merge_sort.c`: Merge sort implementation.
- `104-heap_sort.c`: Heap sort implementation.
- `105-radix_sort.c`: Radix sort implementation for positive integer arrays.
- `106-bitonic_sort.c`: Bitonic sort implementation.
- `107-quick_sort_hoare.c`: Quick sort implementation with the Hoare partition scheme.
- `big_o`: Directory containing a Python script to measure and compare time complexities of each sorting algorithm.

## Credits

The "0x1B. C - Sorting Algorithms & Big O" project is part of ALX_africa software engineering curriculum and was designed and implemented by Azuka Uteh.

## License

This project is licensed under the MIT License - see the LICENSE file for details.
