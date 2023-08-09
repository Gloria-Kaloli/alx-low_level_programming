#include "main.h"

/**
 * _strncat - A function that concentrates two strings
 * using at most n bytes from src
 * @dest: char (entered value)
 * @src: char (entered value)
 * @n: int (entered value)
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int p;
	int q;

	p = 0;
	while (dest[p] != '\0')
	{
		p++;
	}
	q = 0;
	while (q < n && src[q] != '\0')
	{
		dest[p] = src[q];
		p++;
		q++;
	}
	dest[p] = '\0';
	return (dest);
}

