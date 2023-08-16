#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: array
 * @size: size of integer
 * @cmp: pointer to integer
 *
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
