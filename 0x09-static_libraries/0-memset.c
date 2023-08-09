#include "main.h"

/**
 * _memset - Aprogram that fills a block memory with a specific value
 * @s: address of memory to be filled
 * @b: desired value
 * @n: no of bytes
 *
 * Return: changed array with new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int r = 0;

	for (; n > 0; r++)
	{
		s[r] = b;
		n--;
	}
	return (s);
}
