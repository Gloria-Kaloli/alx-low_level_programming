#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
