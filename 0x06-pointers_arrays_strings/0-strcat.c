#include "main.h"

/**
 * _strcat - A  function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int g;
	int h;

	g = 0;
	while (dest[g] != '\0')
	{
		g++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[g] = src[h];
		g++;
		h++;
	}

	dest[g] = '\0';
	return (dest);
}
