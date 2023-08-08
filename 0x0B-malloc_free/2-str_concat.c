#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: char
 * @s2: char
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int r, sr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	r = sr = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[sr] != '\0')
		sr++;

	conct = malloc(sizeof(char) * (r + sr + 1));
	if (conct == NULL)
		return (NULL);
	r = sr = 0;
	while (s1[r] != '\0')
	{
		conct[r] = s1[r];
		r++;
	}
	while (s2[sr] != '\0')
	{
		conct[r] = s2[sr];
		r++, sr++;
	}
	conct[r] = '\0';
		return (conct);
}
