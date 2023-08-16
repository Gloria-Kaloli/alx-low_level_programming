#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A  function that executes a function given as
 * a parameter on each element of an array
 * @array: function array
 * @size : size of parameter of each element
 * @action: element of array
 *
 * Return: funtion parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;
	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
