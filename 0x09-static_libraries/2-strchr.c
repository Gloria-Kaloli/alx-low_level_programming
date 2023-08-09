#include "main.h"

/**
 * _strchr - A program entry point
 * @s: input value
 * @c: input value
 *
 * Return: 0 (successful)
 */

char *_strchr(char *s, char c)
{
	int r = 0;

	for (; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (&s[r]);
	}
	return (0);
}
