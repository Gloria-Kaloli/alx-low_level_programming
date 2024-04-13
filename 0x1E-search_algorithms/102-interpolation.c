#include "search_algos.h"

/**
 * interpolation_search - program to search for a value in a sorted array using
 * interpolation search
 * @array: pointer to the start of the array
 * @size: the size of the array (number of elements)
 * @value: the value to be searched for
 *
 * Return: first index value is found at or -1 if not present or array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid;
	int low = 0;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		mid = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (mid > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else
		{
			if (array[mid] > value)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}

	return (-1);
}
