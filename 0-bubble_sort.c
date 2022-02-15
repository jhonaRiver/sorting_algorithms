#include "sort.h"

/**
 * bubbe_sort - Sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i = 0, aux = 0, max = 0, swapped = 1;

	if (!array || size < 2)
		return;
	max = size - 1;
	for (; i < max; ++i)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i + 1];
			array[i + 1] = aux;
			swapped = 1;
			print_array(array, size);
		}
		if (swapped == 1 && 1 == max - 1)
			i = -1, swapped = 0, --max;
	}
}
