#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - A  function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: char
 *
 * Return: NULL if str=NULL
 */

char *_strdup(char *str)
{
	char *aaa;
	int v, w = 0;

	if (str == NULL)
		return (NULL);
	v = 0;
	while (str[v] != '\0')
		v++;

	aaa = malloc(sizeof(char) * (v));

	if (aaa == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		aaa[w] = str[w];
	return (aaa);
}
