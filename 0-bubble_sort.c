#include "sort.h"
void swap_ints(int *p, int *q);
void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);


/**
 * swap_ints - Swap two integers in an array.
 * @p: The first integer to swap.
 * @q: The second integer to swap.
 */
void swap_ints(int *p, int *q)
{
int tmp;

tmp = *p;
*p = *q;
*q = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
bool bubbly = false;

if (array == NULL || size < 2)
return;

while (bubbly == false)
{
bubbly = true;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap_ints(array + i, array + i + 1);
print_array(array, size);
bubbly = false;
}
}
len--;
}
}
