#include "main.h"

/**
 * get_endianness - A program that checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int d;
	char *b;

	d = 1;
	b = (char *)&d;
	return (*b);
}
