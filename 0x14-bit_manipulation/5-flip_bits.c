#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * you would need to flip to get from one number to another
 *
 * @n: number of bits
 * @m: number to be fliped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tip = n ^ m, bits = 0;

	while (tip > 0)
	{
		bits += (tip & 1);
		tip >>= 1;
	}
	return (bits);
}
