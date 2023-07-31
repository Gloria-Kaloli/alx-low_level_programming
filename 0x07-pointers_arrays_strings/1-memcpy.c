#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;

	int m = n;

	for (; p < m; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
