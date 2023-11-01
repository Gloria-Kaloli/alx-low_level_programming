#include "main.h"

/**
 * binary_to_uint - A function that converts a
 * binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int pum;

	pum = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		pum <<= 1;
		if (b[k] == '1')
			pum += 1;
	}
	return (pum);
}
