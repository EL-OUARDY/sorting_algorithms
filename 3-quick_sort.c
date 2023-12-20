#include "sort.h"

void sort(int *array, size_t size, int start, int end);
int partition(int *array, int start, int end);
void swap(int *array, int index1, int index2);

/**
 * quick_sort - sort an array using Quick sort algorithm
 *
 * @array: targetetd array
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2) /* no sorting needed */
		return;

	sort(array, size, 0, size - 1); /* quick sort the whole array */
}

/**
 * sort - quicksort algorithm using recursion
 * @array: array of integers
 * @size: size of the array
 * @start: starting index of the array partition
 * @end: ending index of the array partition
 *
 * Return: void
 */
void sort(int *array, size_t size, int start, int end)
{
	int boundary;

	if (start >= end) /* done */
		return;

	/* get boundary */
	boundary = partition(array, start, end);

	/* display result */
	print_array(array, size);

	/* sort left */
	sort(array, size, start, boundary - 1);
	/* sort right */
	sort(array, size, boundary + 1, end);
}

/**
 * partition - get the pivot correct index
 * @array: array of integers
 * @start: starting index of the array partition
 * @end: ending index of the array partition
 *
 * Return: integer - pivot index after getting moved to the right place
 */
int partition(int *array, int start, int end)
{
	/* last element as pivot - Lomuto partition scheme */
	int pivot, boundary, i;

	pivot = array[end];
	boundary = start - 1;

	for (i = start; i <= end; i++)
		if (array[i] <= pivot)
			swap(array, i, ++boundary);

	return (boundary);
}

/**
 * swap - swap two array integers values
 * @array: target array
 * @index1: first index
 * @index2: second index
 *
 * Return: void
 */
void swap(int *array, int index1, int index2)
{
	int temp;

	temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;
}
