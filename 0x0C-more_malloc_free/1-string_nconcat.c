#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: int
 *
 * Return: NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t r, s, t;
	char *k;

	if (s1 == NULL)
		r = 0;
	else
	{
		for (r = 0; s1[r] != '\0'; r++)
			;
	}
	if (s2 == NULL)
		s = 0;
	else
	{
		for (s = 0; s2[s] != '\0'; s++)
			;
	}
	if (s > n)
		s = n;
	k = malloc(sizeof(char) * (r + s + 1));
	if (k == NULL)
		return (NULL);
	for (t = 0; t < r; t++)
	k[t] = s1[t];
	for (t = 0; t < s; t++)
	k[t + r] = s2[t];
	k[r + s] = '\0';
	return (k);
}
