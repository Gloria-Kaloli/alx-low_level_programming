#include "main.h"

/**
 * _strncpy - A program that copies a string
 * @dest: input value (char)
 * @src: input value (char)
 * @n: input value (iny0
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
