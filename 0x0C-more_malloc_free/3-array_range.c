#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: minimum input
 * @max: maximum input
 *
 * Return: ordered value from min to max
 */

int *array_range(int min, int max)
{
	int g, h;
	int *r;

	if (min > max)
		return (NULL);
	h = max - min + 1;
	r = malloc(sizeof(int) * h);
	if (r == NULL)
		return (NULL);
	for (g = 0; g < h; g++)
	{
		r[g] = min;
		min++;
	}
	return (r);
}
