#include "sort.h"

/**
 * bubble_sort - sort an array using bubble sort algorithm
 *
 * @array: targetetd array
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;
	bool swapped = false;
	int tmp;

	if (array == NULL || size < 2) /* no sorting needed */
		return;

	for (i = 0; i < (size - 1); i++)
	{
		swapped = false;
		for (j = 0; j < (len - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = true;
				print_array(array, size);
			}
		}
		len--;

		if (swapped == false) /* means array is sorted */
			return; /* job done */
	}
}
