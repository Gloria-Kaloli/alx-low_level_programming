#include "main.h"

/**
 *  _memset - Program fills a block of memory with a specific value
 *  @s: starting address of memory to be filled
 *  @b: the desired value
 *  @n: number of bytes to be changed
 *   Return: memory with specific value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (; n > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}
