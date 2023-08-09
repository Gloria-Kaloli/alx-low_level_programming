#include "main.h"

/**
 * _memcpy - A funtion that copies memory area
 * @dest: memory is stored
 * @src: memory is copied
 * @n: number of bytes
 *
 * Return: copied memory with bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int s = n;

	for (; r < s; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
