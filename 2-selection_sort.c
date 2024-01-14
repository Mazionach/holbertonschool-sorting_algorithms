
#include "sort.h"

/**
 * selection_sort - sort array of ints
 * @array: the array
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t sort, i;
	int tmp, sorted, min;

	for (sort = 0; sort < size; sort++)
	{
		min = array[sort];
		sorted = 0;
		for (i = sort + 1; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
				sorted = i;
			}
		}
		if (sorted)
		{
			tmp = array[sort];
			array[sort] = array[sorted];
			array[sorted] = tmp;
			print_array(array, size);
		}
	}
}
