#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - quick sort algorithm
 * @array: array
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}

/**
 * quicksort_recursion - recursion
 * @array: array
 * @low: low
 * @high: high
 * @size: size of arrray
 */
void quicksort_recursion(int *array, int low, int high, size_t size)
{
	int index;

	if (low < high)
	{
		index = partition(array, low, high);
		print_array(array, size);
		quicksort_recursion(array, low, index - 1, size);
		quicksort_recursion(array, index + 1, high, size);
	}
}

/**
 * partition - partition
 * @array: array
 * @low: low
 * @high: high
 * Return: index of pivot
 */

int partition(int *array, int low, int high)
{
	int pivot_value = array[high];
	int i = low;
	int j;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot_value)
		{
			swap(&array[i], &array[j]);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	return (i);
}
/**
 * swap - swaps number
 * @a: number a
 * @b: number b
 *
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
