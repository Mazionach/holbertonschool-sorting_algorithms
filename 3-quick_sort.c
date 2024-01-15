#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using quicksort.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 * Return: Nothing.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;

	recursive_quick_sort(array, 0, size - 1, size);
}

/**
 * lomuto_partition - Lomuto partition scheme for quicksort.
 * @arr: Pointer to the array to be partitioned.
 * @lo: The lower index of the partition.
 * @hi: The higher index of the partition.
 * @size: The number of elements in the array.
 * Return: The partition index.
 */
int lomuto_partition(int *arr, int lo, int hi, size_t size)
{
	int pivot = arr[hi];
	int i = lo - 1, j;

	for (j = lo; j <= hi; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	return (i);
}
/**
 * recursive_quick_sort - Recursively sorts a subarray using quicksort.
 * @arr: Pointer to the array to be sorted.
 * @low: The lower index of the subarray.
 * @high: The higher index of the subarray.
 * @size: The number of elements in the array.
 * Return: Nothing.
 */
void recursive_quick_sort(int *arr, int low, int high, size_t size)
{
	if (low < high)
	{
		int pivot_index;

		pivot_index = lomuto_partition(arr, low, high, size);

		recursive_quick_sort(arr, low, pivot_index - 1, size);
		recursive_quick_sort(arr, pivot_index + 1, high, size);
	}
}

/**
 * swap - Swaps the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 * Return: Nothing.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

