#include "main.h"

/**
 * _memcpy - A funtion that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied memory and bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int q = n;

	for (; p < q; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
