#include "main.h"

/**
 * binary_to_uint - A  function that converts a binary number
 * to an unsigned int
 * @b: int to convert
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int binary = 0;

	if (!b)
		return (0);
	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		binary = 2 *binary + (b[p] - '0');
	}
	return (binary);
}
