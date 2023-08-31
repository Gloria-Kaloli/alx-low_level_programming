#include "main.h"

/**
 *  get_bit - A function that returns the value of a bit at a given index
 *  @n: value
 *  @index: index value
 *
 *  Return: value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 9))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
