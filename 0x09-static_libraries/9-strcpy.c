#include "main.h"

/**
 * char *_strcpy - A program that copies the string pointed to by src
 * @dest: copy to source
 * @src: copy from source
 * Return: string value
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';

	return (dest);
}
