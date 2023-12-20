#include "sort.h"

/**
 * selection_sort - sort an array using selection sort algorithm
 *
 * @array: targetetd array
 * @size: size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index, temp;

	if (array == NULL || size < 2) /* no sorting needed */
		return;

	for (i = 0; i < size; i++)
	{
		min_index = i;
		for (j = i; j < size; j++) /* look for min item index */
		{
			if (array[j] < array[min_index])
				min_index = j;
		}
		/* swap the minimum with the current element */
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
