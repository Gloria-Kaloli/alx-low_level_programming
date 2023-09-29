#include "main.h"

/**
 * binary_to_uint - A  function that converts a binary number to
 * an unsigned int
 * @b: integeer to convert
 *
 * Return: vonverted integer
 */

unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int binary = 0;

	if (!b)
		return (0);
	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		binary = 2 * binary + (b[y] - '0');
	}
	return (binary);
}

