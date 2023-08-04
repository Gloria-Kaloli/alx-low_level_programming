#include "main.h"

/**
 * _strchr - A function that shows entry point
 * @s: input
 * @c: input
 * Return: 0 (Successful)
 */

char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (&s[i]);
	}
	return (0);
}
