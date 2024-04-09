#include "search_algos.h"

/**
 * linear_search - Program that finds value in an array
 * using linear search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to searched for
 *
 * Return: 1st index where value is located or -1 if not found or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t m;

	if (array == NULL || size == 0)
		return (-1);

	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
	}
	return (-1);
}
