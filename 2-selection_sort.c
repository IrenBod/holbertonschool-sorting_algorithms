#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection Sort algorithm.
 * @array: Pointer to the array of integers to be sorted.
 * @size: The number of elements in the array.
 *
 * This function sorts the array in place. It iterates through the array,
 * finding the smallest element in the unsorted portion and swapping it
 * with the first unsorted element. The process is repeated until the
 * array is completely sorted.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
			{
				min_index = j;
			}
		}
		if (min_index != i)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
