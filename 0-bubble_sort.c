
#include "sort.h"


/**
 * bubble_sort - sort array
 * @array: the array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int swapped = 1, tmp;

	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
	}
}
