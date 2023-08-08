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
	char *rrr;
	int v, w = 0;

	if (str == NULL)
		return (NULL);
	v = 0;
	while (str[v] != '\0')
		v++;

	rrr = malloc(sizeof(char) * (v));

	if (rrr == NULL)
		return (NULL);

	for (w = 0; str[w]; w++)
		rrr[w] = str[w];
	return (rrr);
}
