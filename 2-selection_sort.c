
#include "sort.h"

/**
 * selection_sort - sort array of ints
 * @array: the array
 * @size: array size
 */
void selection_sort(int *array, size_t size)
{
	size_t sort, i;
	int tmp, sorted;

	for (sort = 0; sort < size; sort++)
	{
		sorted = 0;
		for (i = sort + 1; i < size; i++)
		{
			if (array[i] < array[sort])
			{
				tmp = array[sort];
				array[sort] = array[i];
				array[i] = tmp;
				sorted = 1
			}
		}
		if (sorted == 1)
			print_array(array, size);
	}
}
