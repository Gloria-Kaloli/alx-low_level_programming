#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: input value
 * @s2: input value
 * Return: s1[g] - s2[g]
 */

int _strcmp(char *s1, char *s2)
{
	int g;

	g = 0;
	while (s1[g] != '\0' && s2[g] != '\0')
	{
		if (s1[g] != s2[g])
		{
			return (s1[g] - s2[g]);
		}
		g++;
	}
	return (0);
}
