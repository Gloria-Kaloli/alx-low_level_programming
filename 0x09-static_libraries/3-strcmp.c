#include "main.h"

/**
 * _strcmp - A function that compared string values
 * @s1: input value(char)
 * @s2: input value(char)
 *
 * Return: 0 (successful)
 */

int _strcmp(char *s1, char *s2)
{
	int r = 0;

	while (s1[r] != '\0' && s2[r] != '\0')
	{
		if (s1[r] != s2[r])
		{
			return (s1[r] - s2[r]);
		}
		r++;
	}
	return (0);
}
