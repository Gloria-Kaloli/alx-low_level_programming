#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: entered value
 * @src: entered char
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int r;
	int t;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	t = 0;
	while (src[t] != '\0')
	{
		dest[r] = src[t];
		r++;
		t++;
	}
	dest[r] = '\0';
	return (dest);
}
