#include "main.h"

/**
 * char *_strcpy - A program that copies the string pointed to by src
 * @dest: dtring to copy to
 * @src: string to copy from
 *
 * Return: dtring value
 */

char *_strcpy(char *dest, char *src)
{
	int r = 0;
	int t = 0;

	while (*(src + r) != '\0')
	{
		r++;
	}
	for (; t < r; t++)
	{
		dest[t] = src[t];
	}
	dest[r] = '\0';
	return (dest);
}
